/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIBezierPath, UIColor, UIDragPreviewParameters;

@interface _DUIPreview : NSObject <Swift>

{
    _Bool _fadesHorizontally;
    _Bool _fadesVertically;
    _Bool _hidesSourceView;
    _Bool _avoidAnimation;
    _Bool _wantsSuppressedMask;
    UIColor *_backgroundColor;
    UIBezierPath *_outline;
    double _originalRotation;
    long long _previewMode;
    struct CGPoint _contentOffset;
    struct CGSize _contentSize;
    struct CGPoint _originalCenter;
    struct CGPoint _liftAnchorPoint;
    struct CGSize _viewScaleFactor;
}

@property (nonatomic, readonly) struct CGSize viewScaleFactor;
@property (nonatomic, readonly) _Bool _springboardPlatterStyle;
@property (nonatomic, readonly) double backAlpha;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic, readonly) struct CGSize boundingSize;
@property (nonatomic, readonly) struct CGPoint contentOffset;
@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic, readonly) struct CGPoint croppedScaledAnchorPoint;
@property (nonatomic, readonly) struct CGSize croppedScaledSize;
@property (nonatomic) _Bool fadesHorizontally;
@property (nonatomic) _Bool fadesVertically;
@property (nonatomic, readonly) double liftAlpha;
@property (nonatomic, readonly) struct CGAffineTransform liftTransform;
@property (nonatomic) _Bool hidesSourceView;
@property (copy, nonatomic) UIBezierPath *outline;
@property (nonatomic) struct CGPoint originalCenter;
@property (nonatomic) double originalRotation;
@property (nonatomic, readonly, getter=isOversized) _Bool oversized;
@property (nonatomic, readonly) double scaleFactor;
@property (nonatomic, readonly) struct CGSize scaledSize;
@property (nonatomic, readonly) double stackAlpha;
@property (nonatomic) _Bool textMode;
@property (nonatomic) long long previewMode;
@property (nonatomic, readonly) double topAlpha;
@property (nonatomic, readonly) struct CGPoint unscaledAnchorPoint;
@property (nonatomic, readonly) struct CGSize unscaledSize;
@property (nonatomic, readonly) UIDragPreviewParameters *parameters;
@property (nonatomic) struct CGPoint liftAnchorPoint;
@property (nonatomic) _Bool avoidAnimation;
@property (nonatomic) _Bool wantsSuppressedMask;

+ (_Bool)supportsSecureCoding;
+ (id)defaultPreviewWithFrame:(struct CGRect)arg1;
+ (double)defaultStackAlpha;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBounds:(struct CGRect)arg1 outline:(id)arg2;
- (id)initWithView:(id)arg1 container:(id)arg2 parameters:(id)arg3 center:(struct CGPoint)arg4;
- (double)_topOffset;
- (id)initWithView:(id)arg1 container:(id)arg2 parameters:(id)arg3;

@end
