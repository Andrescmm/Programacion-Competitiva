






public class Mobile
{
    Message message = new Message(); //Compuesto por Message
    Camera camera;
    Software software;

    public Mobile()
    {
        camera = new Camera(); //Compuesto por Camera
    }

    public void inicializarSoftware()
    {
        software = new Software(); //Compuesto por Software
    }

    class Software { }

}

