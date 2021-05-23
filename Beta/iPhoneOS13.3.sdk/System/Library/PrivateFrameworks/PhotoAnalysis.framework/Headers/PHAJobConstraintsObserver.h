/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class PHAJobConstraints;

@protocol PHAJobConstraintsObserverDelegate;

@interface PHAJobConstraintsObserver : NSObject

{
    _Bool _shutdownRequested;
    id <PHAJobConstraintsObserverDelegate> _delegate;
    PHAJobConstraints *_currentConstraints;
}

@property (retain, nonatomic) PHAJobConstraints *currentConstraints;
@property (weak, nonatomic) id <PHAJobConstraintsObserverDelegate> delegate;
@property _Bool shutdownRequested;

- (id)init;
- (void)dealloc;
- (void)setShutdownRequested;
- (id)initWithInitialConstraints:(id)arg1 delegate:(id)arg2;
- (id)acceptConstraints:(id)arg1 mask:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
