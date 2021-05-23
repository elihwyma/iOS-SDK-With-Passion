/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBTransientOverlayBlockTransitionCoordinator : NSObject

{
    CDUnknownBlockType _startTransitionHandler;
    CDUnknownBlockType _finalizeTransitionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType startTransitionHandler;
@property (copy, nonatomic) CDUnknownBlockType finalizeTransitionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)finalizeTransitionWithContextProvider:(id)arg1;
- (void)startTransitionWithContextProvider:(id)arg1;

@end
