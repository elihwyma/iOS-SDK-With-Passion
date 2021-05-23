/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class CALayer, CAShapeLayer, TSDBezierPath, TSDRep;

@interface TSDKnob : NSObject

{
    int mType;
    struct CGPoint mPosition;
    _Bool mOffsetValid;
    struct CGPoint mOffset;
    double mRadius;
    unsigned long long mTag;
    TSDRep *mRep;
    _Bool mWorksWhenRepLocked;
    _Bool mWorksWhenInVersionBrowsingMode;
    _Bool mShouldDisplayDirectlyOverRep;
    CALayer *mLayer;
    TSDBezierPath *mHitRegionPath;
    CAShapeLayer *mHitRegionLayer;
}

@property (nonatomic) int type;
@property (nonatomic) struct CGPoint position;
@property (nonatomic) _Bool offsetValid;
@property (nonatomic) struct CGPoint offset;
@property (nonatomic) double radius;
@property (nonatomic) unsigned long long tag;
@property (nonatomic, readonly) CALayer *layer;
@property (copy, nonatomic) TSDBezierPath *hitRegionPath;
@property (nonatomic, readonly) TSDRep *rep;
@property (nonatomic) _Bool worksWhenRepLocked;
@property (nonatomic) _Bool worksWhenInVersionBrowsingMode;
@property (nonatomic) _Bool shouldDisplayDirectlyOverRep;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)knobImage;
- (_Bool)overlapsWithKnob:(id)arg1;
- (_Bool)obscuresKnob:(id)arg1;
- (_Bool)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2 returningDistance:(double *)arg3;
- (id)initWithType:(int)arg1 position:(struct CGPoint)arg2 radius:(double)arg3 tag:(unsigned long long)arg4 onRep:(id)arg5;
- (void)updateHitRegionPathForRep:(id)arg1;
- (double)i_rotationInDegreesForKnobOnRep:(id)arg1;
- (_Bool)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2;
- (int)dragType;
- (id)hitRegionLayerForRep:(id)arg1;
- (struct CGRect)boundingBoxOfHitRegionForRep:(id)arg1 scale:(double)arg2;

@end
