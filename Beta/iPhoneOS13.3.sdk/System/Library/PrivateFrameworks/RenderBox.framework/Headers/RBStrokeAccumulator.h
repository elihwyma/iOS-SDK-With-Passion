/*
 Image: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
 */

#import <Foundation/NSObject.h>

#import <RenderBox/Swift-Protocol.h>

@class NSString;

@interface RBStrokeAccumulator : NSObject <Swift>

{
    struct vector<RBStrokeElement, std::__1::allocator<RBStrokeElement>> _elements;
    struct vector<float, std::__1::allocator<float>> _values;
    struct cf_ptr<CGImage *> _image;
    float _imageScale;
    int _imageCount;
    int _strokeType;
    int _blendMode;
    int _lineCap;
    int _lineJoin;
    float _miterLimit;
    long long _seed;
    struct CGRect _bounds;
    float _borderWidth;
    _Bool _hasBounds;
    _Bool _committed;
    _Bool _rotatesImage;
}

@property (nonatomic) int strokeType;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (nonatomic) float miterLimit;
@property (retain, nonatomic) struct CGImage *image;
@property (nonatomic) float imageScale;
@property (nonatomic) int imageCount;
@property (nonatomic) _Bool rotatesImage;
@property (nonatomic) int blendMode;
@property (nonatomic) long long seed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGRect boundingRect;
@property (nonatomic, readonly) float borderWidth;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)commit;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 info:(void *)arg2;
- (void)addElement:(unsigned char)arg1 args:(const float *)arg2;
- (void)addPath:(struct CGPath *)arg1 transform:(struct CGAffineTransform)arg2;
- (void)removeAllElements;

@end
