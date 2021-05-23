/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <QuartzCore/CALayer.h>

@class NSString;

@interface CALayer (PXGReusableViewAdoption)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool px_supportsAlphaBlending;

- (void)pxg_configureWithTexture:(id)arg1 geometry:(CDStruct_3ab912e1 *)arg2 info:(CDStruct_9d1ebe49 *)arg3 style:(CDStruct_506f5052 *)arg4 textureInfo:(CDStruct_183601bc *)arg5 resizableCapInsets:(CDStruct_0054b44d)arg6;
- (void)pxg_becomeReusable;
- (void)pxg_addToScrollViewController:(id)arg1;
- (void)pxg_prepareForReuse;
- (void)pxg_shiftPosition:(struct CGPoint)arg1;

@end
