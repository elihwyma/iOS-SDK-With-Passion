/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, WLSourceDevice, WLURLSessionController;

@interface WLRemoteDeviceDataSource : NSObject

{
    WLSourceDevice *_device;
    WLURLSessionController *_urlSessionController;
}

@property (retain, nonatomic) WLSourceDevice *device;
@property (retain, nonatomic) WLURLSessionController *urlSessionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_requestSerialQueue;

- (id)_urlScheme;
- (void)dataForSummary:(id)arg1 migrator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)accountsDataForMigrator:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)summariesDataForAccount:(id)arg1 migrator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fileForSummary:(id)arg1 migrator:(id)arg2 fileAccessor:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dataSegmentForSummary:(id)arg1 byteRange:(struct _NSRange)arg2 migrator:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateUIWithProgress:(double)arg1 logString:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_urlForAccountsWithMigrator:(id)arg1;
- (double)_urlRequestTimeout;
- (void)_performRequest:(id)arg1 numberOfRetriesAllowed:(unsigned long long)arg2 startDate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_urlForRecordSummariesForMigrator:(id)arg1 withAccountIdentifier:(id)arg2;
- (id)_urlForRecordForMigrator:(id)arg1 withSummaryIdentifier:(id)arg2 accountIdentifier:(id)arg3 segmentByteRange:(struct _NSRange *)arg4;
- (void)_performDownloadRequest:(id)arg1 numberOfRetriesAllowed:(unsigned long long)arg2 startDate:(id)arg3 fileAccessor:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_shouldRetryWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (unsigned long long)_newNumberOfRetriesAllowed:(unsigned long long)arg1 startDate:(id)arg2;
- (id)initWithSourceDevice:(id)arg1 urlSessionController:(id)arg2;
- (id)_relativePathForRecordForMigrator:(id)arg1 summaryIdentifier:(id)arg2 accountIdentifier:(id)arg3;

@end
