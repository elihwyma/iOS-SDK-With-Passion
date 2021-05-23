/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWorkspaceTransitionRequest.h>

@class SBMainWorkspace;

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest

{
    long long _source;
    CDUnknownBlockType _transactionProvider;
    CDUnknownBlockType _transactionConfigurator;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic, readonly) SBMainWorkspace *workspace;
@property (nonatomic) long long source;
@property (copy, nonatomic) CDUnknownBlockType transactionProvider;
@property (copy, nonatomic) CDUnknownBlockType transactionConfigurator;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;

- (void)finalize;
- (id)succinctDescriptionBuilder;
- (id)initWithDisplayConfiguration:(id)arg1;
- (id)copyMainWorkspaceTransitionRequest;
- (id)compactDescriptionBuilder;
- (void)declineWithReason:(id)arg1;
- (_Bool)isMainWorkspaceTransitionRequest;
- (id)_initWithWorkspace:(id)arg1 displayConfiguration:(id)arg2;
- (void)setTransientOverlayContext:(id)arg1;

@end
