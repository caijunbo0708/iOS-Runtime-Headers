/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface AirPlayImage : NSObject {
    struct CGImage { } * _image;
    int  _imageOrientation;
    void * _ioSurface;
    struct CGSize { 
        double width; 
        double height; 
    }  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _unadjustedSize;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) int imageOrientation;
@property (nonatomic, readonly) void*ioSurface;
@property (nonatomic, readonly) id layerContents;
@property (nonatomic) struct CGSize { double x1; double x2; } scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (struct CGImage { }*)CGImage;
- (void)_setCGImage:(struct CGImage { }*)arg1;
- (void)_setIOSurface:(void*)arg1;
- (void)_setImageOrientation:(int)arg1;
- (struct CGSize { double x1; double x2; })_unadjustedContentSize;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentsTransformForLayer:(id)arg1;
- (void)dealloc;
- (int)imageOrientation;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 decode:(bool)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 decode:(bool)arg2;
- (void*)ioSurface;
- (id)layerContents;
- (struct CGSize { double x1; double x2; })scale;
- (void)setScale:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end