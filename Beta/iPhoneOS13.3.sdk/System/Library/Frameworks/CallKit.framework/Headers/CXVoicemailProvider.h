/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXAbstractProvider.h>

@class NSString;

@protocol CXVoicemailProviderDelegate, CXVoicemailProviderHostProtocol;

@interface CXVoicemailProvider : CXAbstractProvider

@property (weak, nonatomic) id <CXVoicemailProviderDelegate> delegate;
@property (nonatomic, readonly) id <CXVoicemailProviderHostProtocol> hostProtocolDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)_performAction:(id)arg1;
- (void)reportNewVoicemailsWithUpdates:(id)arg1;
- (void)reportVoicemailsUpdated:(id)arg1;
- (void)reportVoicemailsRemovedWithUUIDs:(id)arg1;
- (id)pendingVoicemailActionsOfClass:(Class)arg1 withVoicemailUUID:(id)arg2;
- (void)reportNewVoicemailWithUpdate:(id)arg1;
- (void)reportVoicemailUpdated:(id)arg1;
- (void)reportVoicemailRemovedWithUUID:(id)arg1;

@end
