/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <SiriActivation/SiriActivationSource.h>

@protocol SiriDirectActionSourceDelegate;

@interface SiriDirectActionSource : SiriActivationSource

{
    id <SiriDirectActionSourceDelegate> _delegate;
}

@property (weak, nonatomic) id <SiriDirectActionSourceDelegate> delegate;

- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)activateWithContext:(id)arg1;
- (void)configureConnection;
- (oneway void)canActivateChangedTo:(id)arg1;
- (void)activateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
