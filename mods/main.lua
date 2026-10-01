function draw()
    draw_cube(3, 0, 0)
    draw_plane()
    if key == "space" then 
    cube(math.random(-5, 5), 5, math.random(-5, 5)) 
    end 
end
