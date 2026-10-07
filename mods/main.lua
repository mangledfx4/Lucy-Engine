function draw()
int x = math.random(-5, 5)
int y = math.random(0, 5)
int z = math.random(-5, 5)
	draw_cube(0, 0, 0)
	draw_cube(math.random(-5, 5), math.random(0, 5), math.random(-5, 5)) 
    draw_plane(0, -1, 0)
end
