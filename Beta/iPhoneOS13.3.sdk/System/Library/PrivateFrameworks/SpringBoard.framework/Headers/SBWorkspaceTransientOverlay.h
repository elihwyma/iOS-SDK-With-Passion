/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWorkspaceEntity.h>

@class SBTransientOverlayViewController;

@interface SBWorkspaceTransientOverlay : SBWorkspaceEntity

{
    SBTransientOverlayViewController *_viewController;
}

@property (nonatomic, readonly) SBTransientOverlayViewController *viewController;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewController:(id)arg1;
- (CDUnknownBlockType)_generator;

@end
