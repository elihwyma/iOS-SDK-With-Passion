/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID, SUAutoInstallForecast, SUManagerClient;

@protocol SUAutoInstallOperationDelegate;

@interface SUAutoInstallOperation : NSObject

{
    SUManagerClient *_client;
    NSUUID *_id;
    id <SUAutoInstallOperationDelegate> _delegate;
    SUAutoInstallForecast *_forecast;
    int _agreementStatus;
    _Bool _canceled;
    _Bool _expired;
    _Bool _clientOwned;
}

@property (nonatomic) id <SUAutoInstallOperationDelegate> delegate;
@property (retain, nonatomic, readonly) SUAutoInstallForecast *forecast;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;
@property (nonatomic, readonly, getter=isCanceled) _Bool canceled;
@property (nonatomic) int agreementStatus;
@property (retain, nonatomic, readonly) NSUUID *id;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)cancel;
- (id)uniqueIdentifier;
- (id)_initWithClient:(id)arg1 clientOwned:(_Bool)arg2 id:(id)arg3 forecast:(id)arg4 agreementStatus:(int)arg5 cancelled:(_Bool)arg6 expired:(_Bool)arg7;
- (_Bool)_isEffectivelyScheduled;
- (_Bool)_isValidForScheduling;
- (_Bool)_isValidTillDate:(id)arg1;
- (_Bool)_isDateExpired:(id)arg1;
- (void)_noteAutoInstallOperationWasCancelled;
- (void)_noteAutoInstallOperationDidExpireWithError:(id)arg1;
- (void)_noteAutoInstallOperationDidConsent;
- (void)_noteAutoInstallOperationIsReadyToInstall:(CDUnknownBlockType)arg1;
- (void)_noteAutoInstallOperationPasscodePolicyChanged:(unsigned long long)arg1;
- (id)initWithAutoInstallOperationModel:(id)arg1 client:(id)arg2;

@end
