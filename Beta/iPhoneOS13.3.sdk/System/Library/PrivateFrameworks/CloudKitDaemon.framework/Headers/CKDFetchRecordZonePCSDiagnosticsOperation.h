/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKPCSDiagnosticInformation, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordZonePCSDiagnosticsOperation : CKDDatabaseOperation

{
    NSString *_identityStatus;
    NSDictionary *_invalidPCSByZoneID;
    NSDictionary *_validPCSByZoneID;
    NSArray *_recordZoneIDs;
    CKPCSDiagnosticInformation *_pcsDiagnosticInfo;
}

@property (retain, nonatomic) NSString *identityStatus;
@property (retain, nonatomic) NSDictionary *invalidPCSByZoneID;
@property (retain, nonatomic) NSDictionary *validPCSByZoneID;
@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) CKPCSDiagnosticInformation *pcsDiagnosticInfo;

- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3;

@end
