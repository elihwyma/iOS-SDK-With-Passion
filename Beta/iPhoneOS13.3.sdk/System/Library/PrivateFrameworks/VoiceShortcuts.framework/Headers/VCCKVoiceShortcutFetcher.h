/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class CKDatabase;

@protocol OS_dispatch_queue;

@interface VCCKVoiceShortcutFetcher : NSObject

{
    _Bool _completed;
    NSObject<OS_dispatch_queue> *_queue;
    CKDatabase *_database;
    long long _qualityOfService;
    CDUnknownBlockType _recordHandler;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) long long qualityOfService;
@property (copy, nonatomic, readonly) CDUnknownBlockType recordHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool completed;

- (void)addOperation:(id)arg1;
- (void)start;
- (void)finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithRecordHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchRecordZones;
- (void)fetchRecordsFromZone:(id)arg1;

@end
