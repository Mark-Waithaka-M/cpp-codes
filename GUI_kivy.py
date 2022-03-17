from kivy.app import App
from kivy.uix.label import label
from kivy.uix.textinput import TextInput
from kivy.uix.label import Label
from kivy.uix.gridlayout import GridLayout

class anchor_layout_demo(AnchorLayout):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.anchor_x = 'left'
        self.anchor_y = 'top' 
        
        self.gridlyt = GridLayout()
        
        self.gridlyt.size_hint = (.4,.4)
        
        self.gridlyt.cols = 1
        self.gridlyt.rows = 2
        
 
        self.lab = Label(
            text = "Enter your name",
            size_hint = (.2,.2)
        )
        self.gridlyt.add_widget(self.lab)
        
        self.text_ip = TextInput(
            size_hint = (.2,.2)
        )
        self.gridlyt.add_widget(self.text_ip)
        
        self.add_widget(self.gridlyt)
    


class DemoApp(App):
    def build(self):
        return Anchor_layout_demo()#(
            #text = "Johnte is a fuckboy and his favourite meal is pussy "
      #  )
        
        
if __name__ == "__main__":
    DemoApp().run() 
   # app = DemoApp()
    #app.run()