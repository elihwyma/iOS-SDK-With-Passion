/*
 Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

#import <CompassUI/CompassRotatingView.h>

@class CompassAtlas, CompassShader, EAGLContext, GLKView, NSString;

@interface CompassBackgroundView : CompassRotatingView

{
    struct CGPoint _compassCenter;
    double _ticLength;
    _Bool _shownInCompass;
    GLKView *_glView;
    EAGLContext *_context;
    CompassShader *_normalShader;
    CompassShader *_knockoutShader;
    CompassShader *_textureShader;
    CompassShader *_lineShader;
    union _GLKMatrix4 _modelViewMatrix;
    union _GLKMatrix4 _projectionMatrix;
    unsigned int _ticVertexArray;
    unsigned int _ticVertexBuffer;
    unsigned int _ticIndexBuffer;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
        CDStruct_818bb265 _field7;
    } *_ticPoints;
    unsigned int *_ticIndexes;
    unsigned int _labelsVertexArray;
    unsigned int _labelsVertexBuffer;
    unsigned int _labelsIndexBuffer;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        CDStruct_818bb265 _field5;
    } *_labelsPoints;
    unsigned int *_labelsIndexes;
    unsigned int _otherLinesVertexArray;
    unsigned int _otherLinesVertexBuffer;
    unsigned int _otherLinesIndexBuffer;
    CompassAtlas *_imageAtlas;
    struct CGPoint _currentOffset;
    double _ticRadius;
    double _bearing;
}

@property (nonatomic) double ticRadius;
@property (nonatomic, readonly) double ticLength;
@property (nonatomic) double bearing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1 forCompass:(_Bool)arg2;
- (void)setupGL;
- (void)generateCompassPoints;
- (void)generateNumberAtlas;
- (void)tearDownGL;
- (void)renderCrosshairInRect:(struct CGRect)arg1;
- (void)positionLabelNamed:(id)arg1 atDegrees:(long long)arg2 fromCenter:(struct CGPoint)arg3 withRadius:(double)arg4 vertexOffset:(unsigned long long)arg5 color:(CDStruct_818bb265)arg6;
- (void)generateExtraLines;
- (void)positionLabels;
- (void)updateDisplay;
- (void)setCompassHeading:(double)arg1;
- (_Bool)setCrosshairOffset:(struct CGSize)arg1;

@end
