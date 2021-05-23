/*
 Image: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSString, NSXPCConnection, SZExtractorInternalDelegate, StreamingUnzipper;

@protocol OS_dispatch_queue, SZExtractorDelegate;

@interface SZExtractor : NSObject

{
    _Bool _isLocalExtractor;
    _Bool _needsPreparation;
    _Bool _hasHadPostSetupMethodsCalled;
    NSString *_extractionPath;
    NSDictionary *_options;
    unsigned long long _lastResumptionOffset;
    NSXPCConnection *_unzipServiceConnection;
    StreamingUnzipper *_inProcessUnzipper;
    NSObject<OS_dispatch_queue> *_serialQueue;
    SZExtractorInternalDelegate *_internalExtractorDelegate;
    NSError *_error;
}

@property (nonatomic) unsigned long long lastResumptionOffset;
@property (nonatomic, readonly) NSXPCConnection *unzipServiceConnection;
@property (nonatomic, readonly) StreamingUnzipper *inProcessUnzipper;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) SZExtractorInternalDelegate *internalExtractorDelegate;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) _Bool isLocalExtractor;
@property (nonatomic) _Bool needsPreparation;
@property (nonatomic) _Bool hasHadPostSetupMethodsCalled;
@property (copy, nonatomic) NSString *extractionPath;
@property (copy, nonatomic, readonly) NSDictionary *options;
@property (weak, nonatomic) id <SZExtractorDelegate> extractorDelegate;
@property (weak, nonatomic) id <SZExtractorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool doesConsumeExtractedData;

+ (_Bool)supportsSecureCoding;
+ (id)knownSZExtractorImplementations;
+ (void)enableDebugLogging;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)supplyBytes:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)finishStreamWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)prepareForExtractionToPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)suspendStreamWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)terminateStreamWithError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithPath:(id)arg1 options:(id)arg2;
- (void)_invalidateObject;
- (void)setActiveExtractorDelegateMethods:(int)arg1;
- (void)prepareForExtraction:(CDUnknownBlockType)arg1;
- (_Bool)consumeExtractedDataIfNeeded;
- (_Bool)_isValidObject;
- (void)_suspendStreamWithCompletionBlockSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setUpWithPath:(id)arg1 options:(id)arg2;
- (id)initWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long *)arg3;
- (_Bool)_synchronouslyPrepareForExtractionAtOffset:(unsigned long long *)arg1;
- (void)_prepareForExtractionSynchronously:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_prepareForLocalExtraction:(CDUnknownBlockType)arg1;
- (void)_prepareForRemoteExtractionSynchronously:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithPath:(id)arg1 resumptionOffset:(unsigned long long *)arg2;
- (id)initWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 resumptionOffset:(unsigned long long *)arg4;
- (id)initForRemoteExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long *)arg3;
- (id)initForLocalExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long *)arg3;

@end
