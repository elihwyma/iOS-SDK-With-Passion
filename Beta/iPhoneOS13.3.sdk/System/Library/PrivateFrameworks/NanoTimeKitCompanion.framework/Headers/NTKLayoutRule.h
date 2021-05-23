/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice;

@interface NTKLayoutRule : NSObject

{
    _Bool _clipsToReferenceFrame;
    CLKDevice *_device;
    long long _horizontalLayout;
    long long _verticalLayout;
    struct CGRect _referenceFrame;
    struct CGAffineTransform _transform;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic) struct CGRect referenceFrame;
@property (nonatomic) long long horizontalLayout;
@property (nonatomic) long long verticalLayout;
@property (nonatomic) _Bool clipsToReferenceFrame;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic, readonly) struct CGSize maximumSize;

+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4;
+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 clip:(_Bool)arg5 transform:(struct CGAffineTransform)arg6;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)validate;
- (id)initForDevice:(id)arg1;
- (struct CGRect)calculateLayoutFrameForBoundsSize:(struct CGSize)arg1;
- (id)layoutRuleByConvertingToCoordinateSpaceWithFrame:(struct CGRect)arg1;
- (double)calculateLayoutFrameWidthForBoundsSize:(struct CGSize)arg1;
- (double)calculateLayoutFrameHeightForBoundsSize:(struct CGSize)arg1;
- (double)calculateLayoutFrameXOriginForBoundsSize:(struct CGSize)arg1;
- (double)calculateLayoutFrameYOriginForBoundsSize:(struct CGSize)arg1;

@end
