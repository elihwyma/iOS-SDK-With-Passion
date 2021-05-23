/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXGDefaultAnimationDelegate : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)adjustGeometry:(inout CDStruct_3ab912e1 *)arg1 style:(inout CDStruct_506f5052 *)arg2 info:(inout CDStruct_9d1ebe49 *)arg3 forTextSpriteAnimatingFromAttributes:(const CDStruct_366bba6a *)arg4 toAttributes:(const CDStruct_366bba6a *)arg5 inRootLayout:(id)arg6;

- (id)animation:(id)arg1 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)arg2 rootLayout:(id)arg3 presentedGeometries:(const CDStruct_3ab912e1 *)arg4 styles:(const CDStruct_506f5052 *)arg5 infos:(const CDStruct_9d1ebe49 *)arg6;
- (void)animation:(id)arg1 prepareWithRootLayout:(id)arg2 viewportShift:(struct CGPoint)arg3;
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_3ab912e1 *)arg2 styles:(inout CDStruct_506f5052 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_3ab912e1 *)arg2 styles:(inout CDStruct_506f5052 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange)arg5;

@end
