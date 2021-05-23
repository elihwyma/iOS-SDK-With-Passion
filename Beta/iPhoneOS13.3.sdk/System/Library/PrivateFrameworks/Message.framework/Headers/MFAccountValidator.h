/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFAccount, MFActivityMonitor, MFError, MFMonitoredInvocation, NSArray;

@protocol MFAccountValidatorDelegate;

@interface MFAccountValidator : NSObject

{
    MFAccount *_account;
    MFActivityMonitor *_accountValidationActivity;
    MFMonitoredInvocation *_validationInvocation;
    CDUnknownBlockType _completionBlock;
    struct {
        unsigned int useSSL:1;
        unsigned int incomingServerSupportsSSL:1;
        unsigned int smtpServerSupportsSSL:1;
        unsigned int canceled:1;
        unsigned int performsValidationInBackground:1;
        unsigned int unused:27;
    } _flags;
    MFError *_incomingServerValidationError;
    MFError *_smtpServerValidationError;
    NSArray *_incomingServerAuthSchemes;
    NSArray *_smtpServerAuthSchemes;
    id <MFAccountValidatorDelegate> _delegate;
}

@property (nonatomic, readonly) _Bool performsValidationInBackground;
@property (nonatomic, readonly) MFMonitoredInvocation *validationInvocation;
@property (weak, nonatomic) id <MFAccountValidatorDelegate> delegate;
@property (nonatomic, readonly) _Bool accountIsValid;
@property (nonatomic, readonly) _Bool accountSupportsSSL;
@property (nonatomic, readonly) MFError *error;
@property (nonatomic, readonly) MFAccount *account;

- (id)init;
- (void)dealloc;
- (void)stop;
- (id)initWithPerformsValidationInBackground:(_Bool)arg1;
- (void)validateAccount:(id)arg1 useSSL:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_validateAccount:(id)arg1 withFallbacks:(_Bool)arg2;
- (void)validateAccountWithoutFallbacks:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_backgroundValidateAccountFinished:(id)arg1 authSchemes:(id)arg2;
- (void)_validateAccount:(id)arg1;
- (void)_validateAccountWithoutFallbacks:(id)arg1;
- (_Bool)_outgoingServerValid;
- (_Bool)_incomingServerValid;
- (void)validateAccount:(id)arg1 useSSL:(_Bool)arg2;
- (void)validateAccountWithoutFallbacks:(id)arg1;
- (void)cancelValidation;
- (id)_ispAccountInfo;
- (_Bool)accountValidationCanceled;

@end
