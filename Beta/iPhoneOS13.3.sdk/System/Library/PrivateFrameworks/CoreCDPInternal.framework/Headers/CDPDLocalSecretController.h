/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class CDPContext, CDPDCircleController, CDPDSecureBackupController;

@protocol CDPLocalSecretFollowUpProvider, CDPStateUIProviderInternal;

@interface CDPDLocalSecretController : NSObject

{
    CDPContext *_context;
    CDPDCircleController *_circleController;
    CDPDSecureBackupController *_secureBackupController;
    id <CDPStateUIProviderInternal> _uiProvider;
    id <CDPLocalSecretFollowUpProvider> _followUpProvider;
}

@property (retain, nonatomic) CDPContext *context;
@property (retain, nonatomic) CDPDCircleController *circleController;
@property (retain, nonatomic) CDPDSecureBackupController *secureBackupController;
@property (retain, nonatomic) id <CDPStateUIProviderInternal> uiProvider;
@property (retain, nonatomic) id <CDPLocalSecretFollowUpProvider> followUpProvider;

- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)attemptToEscrowPreRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishOfflineLocalSecretChangeWithCompletion:(CDUnknownBlockType)arg1;
- (id)contextForController:(id)arg1;
- (void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(CDUnknownBlockType)arg2;
- (id)secureChannelContextForController:(id)arg1;
- (void)_handleCompletionStatus:(_Bool)arg1 preRecord:(_Bool)arg2;
- (void)_attemptToEscrowPreRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_createContextForSecret:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_cdpStateMachine;
- (void)_repairWithStateMachine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_collectLocalSecretWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setContextWithAuthResults:(id)arg1;
- (id)circlePeerIDForSecureBackupController:(id)arg1;
- (_Bool)synchronizeCircleViewsForSecureBackupContext:(id)arg1;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(CDUnknownBlockType)arg1;
- (void)promptForLocalSecretWithCompletion:(CDUnknownBlockType)arg1;

@end
