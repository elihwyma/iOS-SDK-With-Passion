/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthWrapCodablePayloadHeader, HKHealthWrapEncryptor, HKHealthWrapMessageConfiguration, NSError, NSOutputStream, NSURL, NSUUID, _HKCompressionEngine;

@protocol OS_dispatch_queue;

@interface HKHealthWrapMessage : NSObject

{
    HKHealthWrapCodablePayloadHeader *_payloadHeader;
    NSUUID *_studyUUID;
    struct __SecCertificate *_certificate;
    _HKCompressionEngine *_compressionEngine;
    HKHealthWrapEncryptor *_encryptor;
    NSURL *_outputURL;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_queue> *_encryptQueue;
    _Bool _compressionEnabled;
    _Bool _lastSuccess;
    NSError *_lastError;
    HKHealthWrapMessageConfiguration *_configuration;
}

@property (nonatomic, readonly) HKHealthWrapMessageConfiguration *configuration;

+ (id)newOutputFileURL;
+ (id)newOutputFileURLInDirectory:(id)arg1;

- (void)dealloc;
- (void)reset;
- (id)initWithConfiguration:(id)arg1;
- (void)_cleanup;
- (void)_finalize;
- (_Bool)startWithError:(id *)arg1;
- (id)initWithSenderUUID:(id)arg1 studyUUID:(id)arg2 channel:(id)arg3 payloadType:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 payloadIdentifier:(id)arg7 applicationData:(id)arg8 certificate:(struct __SecCertificate *)arg9;
- (id)_codableKeyValuePairsFromDictionary:(id)arg1;
- (_Bool)startWithOutputFileURL:(id)arg1 error:(id *)arg2;
- (void)_writeDataToCompressor:(id)arg1;
- (_Bool)_run:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)appendData:(id)arg1 error:(id *)arg2;
- (id)finalizeWithError:(id *)arg1;
- (void)receiveSinkContent:(id)arg1;
- (void)sinkContentFinished;
- (_Bool)appendDataFromFileURL:(id)arg1 error:(id *)arg2;

@end
