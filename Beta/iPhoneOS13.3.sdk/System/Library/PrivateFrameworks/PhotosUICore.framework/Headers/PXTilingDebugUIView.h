/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSString, PXTilingControllerDebugInfo;

@interface PXTilingDebugUIView : UIView

{
    double _debugWidth;
    PXTilingControllerDebugInfo *__debugInfo;
}

@property (retain, nonatomic, setter=_setDebugInfo:) PXTilingControllerDebugInfo *_debugInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)drawRect:(struct CGRect)arg1;
- (void)tilingControllerDidUpdateDebugInfo:(id)arg1;

@end
