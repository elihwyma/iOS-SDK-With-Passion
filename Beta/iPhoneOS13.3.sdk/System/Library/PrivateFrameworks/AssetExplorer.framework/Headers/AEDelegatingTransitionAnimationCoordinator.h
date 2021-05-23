/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PXTileTransitionAnimationCoordinator;

@interface AEDelegatingTransitionAnimationCoordinator : NSObject

{
    _Bool _enableDoubleSidedAnimations;
    id <PXTileTransitionAnimationCoordinator> __wrappedCoordinator;
}

@property (nonatomic, readonly) id <PXTileTransitionAnimationCoordinator> _wrappedCoordinator;
@property (nonatomic) _Bool enableDoubleSidedAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier)arg1 animationType:(long long)arg2 fromGeometry:(struct PXTileGeometry)arg3 fromUserData:(id)arg4 toGeometry:(struct PXTileGeometry)arg5 toUserData:(id)arg6;
- (_Bool)getInitialGeometry:(out struct PXTileGeometry *)arg1 initialUserData:(out id *)arg2 forAppearingTileWithIdentifier:(struct PXTileIdentifier)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
- (_Bool)getFinalGeometry:(out struct PXTileGeometry *)arg1 finalUserData:(out id *)arg2 forDisappearingTileWithIdentifier:(struct PXTileIdentifier)arg3 fromGeometry:(struct PXTileGeometry)arg4 fromUserData:(id)arg5;
- (_Bool)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier)arg1 fromGeometry:(struct PXTileGeometry)arg2 fromUserData:(id)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
- (id)initWithWrappedCoordinator:(id)arg1;

@end
