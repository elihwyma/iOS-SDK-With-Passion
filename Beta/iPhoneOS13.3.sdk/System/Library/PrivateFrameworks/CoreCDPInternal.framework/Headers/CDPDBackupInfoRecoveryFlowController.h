/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <CoreCDPInternal/CDPDRecoveryFlowController.h>

@class NSArray;

@protocol CDPDBackupRecoveryErrorProvider, CDPDBackupRecoveryResultsParser;

@interface CDPDBackupInfoRecoveryFlowController : CDPDRecoveryFlowController

{
    id <CDPDBackupRecoveryResultsParser> _resultParser;
    id <CDPDBackupRecoveryErrorProvider> _errorProvider;
    NSArray *_recoveryRecords;
}

@property (retain, nonatomic) NSArray *recoveryRecords;
@property (retain, nonatomic) id <CDPDBackupRecoveryResultsParser> resultParser;
@property (retain, nonatomic) id <CDPDBackupRecoveryErrorProvider> errorProvider;

- (void)retrieveInflatedDevices:(CDUnknownBlockType)arg1;
- (_Bool)secretValidator:(id)arg1 shouldContinueValidationAfterError:(id)arg2;
- (void)secretValidator:(id)arg1 didFailRecoveryWithErrors:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_recoveryListFromDevices:(id)arg1;
- (void)_updateRecordRecoveryStatusForRecordDictionary:(id)arg1;
- (void)beginRecoveryWithCompletion:(CDUnknownBlockType)arg1;

@end
