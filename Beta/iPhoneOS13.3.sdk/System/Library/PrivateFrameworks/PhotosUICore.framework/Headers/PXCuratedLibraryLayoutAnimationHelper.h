/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PXCuratedLibraryLayout;

@interface PXCuratedLibraryLayoutAnimationHelper : NSObject

{
    _Bool _wantsPresentationAdjustment;
    _Bool _wantsAnimationWithSpriteTransfer;
    NSDictionary *_userData;
    PXCuratedLibraryLayout *_layout;
}

@property (retain, nonatomic) NSDictionary *userData;
@property (weak, readonly) PXCuratedLibraryLayout *layout;
@property (nonatomic, readonly) long long animationCurve;
@property (nonatomic, readonly) double animationDuration;
@property (nonatomic, readonly) _Bool wantsDoubleSidedAnimations;
@property (nonatomic, readonly) _Bool wantsPresentationAdjustment;
@property (nonatomic, readonly) _Bool wantsAnimationWithSpriteTransfer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createAnimationIfNeededForLayout:(id)arg1 context:(long long)arg2 userData:(id)arg3;
+ (id)createTransitionIfNeededForLayout:(id)arg1 context:(long long)arg2;

- (id)init;
- (id)initWithLayout:(id)arg1;
- (void)animation:(id)arg1 prepareWithRootLayout:(id)arg2 viewportShift:(struct CGPoint)arg3;
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_3ab912e1 *)arg2 styles:(inout CDStruct_506f5052 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_3ab912e1 *)arg2 styles:(inout CDStruct_506f5052 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange)arg5;

@end
