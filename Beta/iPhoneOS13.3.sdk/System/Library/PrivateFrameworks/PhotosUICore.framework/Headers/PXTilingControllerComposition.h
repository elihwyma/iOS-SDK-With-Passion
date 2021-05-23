/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSSet;

@protocol PXTilingControllerCompositionInput, PXTilingControllerCompositionObserver, PXTilingControllerCompositionOutput, PXTilingScrollController;

@interface PXTilingControllerComposition : NSObject

{
    _Bool _active;
    NSSet *_tilingControllers;
    id <PXTilingControllerCompositionInput> _input;
    id <PXTilingControllerCompositionOutput> _output;
    id <PXTilingScrollController> __scrollController;
    id <PXTilingControllerCompositionObserver> _observer;
}

@property (weak, nonatomic, setter=_setScrollController:) id <PXTilingScrollController> _scrollController;
@property (weak, nonatomic) id <PXTilingControllerCompositionObserver> observer;
@property (nonatomic, getter=isActive) _Bool active;
@property (copy, nonatomic, readonly) NSSet *tilingControllers;
@property (weak, nonatomic) id <PXTilingControllerCompositionInput> input;
@property (weak, nonatomic) id <PXTilingControllerCompositionOutput> output;

- (void)invalidateComposition;
- (void)updateComposition;
- (void)invalidateCompositionWithContext:(id)arg1;

@end
