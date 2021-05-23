/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class OFViewProxy;

@interface OFLayoutStep : NSObject

{
    OFViewProxy *_targetView;
    unsigned long long _targetAttribute;
    double _targetSizeMultiplier;
    long long _relation;
    OFViewProxy *_anchorView;
    unsigned long long _anchorAttribute;
    double _anchorSizeMultiplier;
    double _multiplier;
    double _constant;
}

@property (readonly) OFViewProxy *targetView;
@property (readonly) unsigned long long targetAttribute;
@property (readonly) double targetSizeMultiplier;
@property (readonly) long long relation;
@property (readonly) OFViewProxy *anchorView;
@property (readonly) unsigned long long anchorAttribute;
@property (readonly) double anchorSizeMultiplier;
@property (readonly) double multiplier;
@property (readonly) double constant;

+ (id)_stepsFrom2DString:(id)arg1 targetView:(id)arg2 anchorView:(id)arg3;
+ (id)_stepFrom1DString:(id)arg1 targetView:(id)arg2 anchorView:(id)arg3;
+ (unsigned long long)layoutAttributeFromScanner:(id)arg1;
+ (_Bool)_parseCGPoint:(struct CGPoint *)arg1 withScanner:(id)arg2;
+ (id)stepForTarget:(id)arg1 attribute:(unsigned long long)arg2 sizeMultiplier:(double)arg3 relatedBy:(long long)arg4 toAnchorView:(id)arg5 attribute:(unsigned long long)arg6 sizeMultiplier:(double)arg7 multiplier:(double)arg8 constant:(double)arg9;
+ (id)stepsFromString:(id)arg1 targetView:(id)arg2 anchorView:(id)arg3;

- (id)init;
- (void)run;

@end
