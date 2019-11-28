#
#  Configure:
#  source /opt/yocto/poky/1.3.2/environment-setup-core2-poky-linux
#

app1:
	$(CXX) app.cpp include/game.cpp -o app1 -fopenmp -lm -lallegro_image -lallegro -lallegro_ttf -lallegro_font -lallegro_audio -lallegro_acodec -lallegro_primitives -lallegro_ttf -lallegro_font -lallegro_dialog
	# cp app /opt/tftp

app2:
	$(CXX) app2.cpp include/game.cpp -o app2 -fopenmp -lm -lallegro_image -lallegro -lallegro_ttf -lallegro_font -lallegro_audio -lallegro_acodec -lallegro_primitives -lallegro_ttf -lallegro_font
	# cp app /opt/tftp

app3:
	$(CXX) app3.cpp include/game.cpp -o app3 -fopenmp -lm -lallegro_image -lallegro -lallegro_ttf -lallegro_font -lallegro_audio -lallegro_acodec -lallegro_primitives -lallegro_ttf -lallegro_font
	# cp app /opt/tftp

all:
	$(CXX) app.cpp include/game.cpp -o app1 -fopenmp -lm -lallegro_image -lallegro -lallegro_ttf -lallegro_font -lallegro_audio -lallegro_acodec -lallegro_primitives -lallegro_ttf -lallegro_font -lallegro_dialog
	$(CXX) app2.cpp include/game.cpp -o app2 -fopenmp -lm -lallegro_image -lallegro -lallegro_ttf -lallegro_font -lallegro_audio -lallegro_acodec -lallegro_primitives -lallegro_ttf -lallegro_font	
	$(CXX) app3.cpp include/game.cpp -o app3 -fopenmp -lm -lallegro_image -lallegro -lallegro_ttf -lallegro_font -lallegro_audio -lallegro_acodec -lallegro_primitives -lallegro_ttf -lallegro_font

clean:
	rm -rf *.o *~ core app
