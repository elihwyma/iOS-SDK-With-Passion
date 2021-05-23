/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, _CDDataCollectionSession, _CDEventStreamsRegister;

@protocol OS_xpc_object, _DKKnowledgeQuerying;

@interface _CDDataCollection : NSObject

{
    _Bool _selectedForDataCollection;
    _Bool _deleteSessionOnCleanup;
    NSObject<OS_xpc_object> *_activity;
    id <_DKKnowledgeQuerying> _storage;
    CDUnknownBlockType _submissionBlock;
    NSString *_dataDirectory;
    NSString *_sessionPath;
    NSDate *_collectionDate;
    _CDDataCollectionSession *_session;
    double _samplingRate;
    unsigned long long _daysPerBatch;
    unsigned long long _maxBatches;
    _CDEventStreamsRegister *_eventStreamsRegister;
}

@property (copy, nonatomic, readonly) NSString *dataDirectory;
@property (copy, nonatomic, readonly) NSString *dataPath;
@property (copy, nonatomic, readonly) NSString *sessionPath;
@property (copy, nonatomic, readonly) NSDate *collectionDate;
@property (retain, nonatomic) _CDDataCollectionSession *session;
@property (nonatomic, readonly) double samplingRate;
@property (nonatomic, readonly) unsigned long long daysPerBatch;
@property (nonatomic, readonly) unsigned long long maxBatches;
@property (nonatomic) _Bool selectedForDataCollection;
@property (nonatomic) _Bool deleteSessionOnCleanup;
@property (nonatomic, readonly) _CDEventStreamsRegister *eventStreamsRegister;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;
@property (nonatomic, readonly) id <_DKKnowledgeQuerying> storage;
@property (copy, nonatomic) CDUnknownBlockType submissionBlock;

- (void)_execute;
- (void)cleanup;
- (id)truncatedFileHandle;
- (_Bool)submitDataForCollection;
- (id)initWithStorage:(id)arg1 activity:(id)arg2;
- (void)execute;
- (id)initWithStorage:(id)arg1 activity:(id)arg2 sessionPath:(id)arg3 dataDirectory:(id)arg4 collectionDate:(id)arg5 samplingRate:(double)arg6 daysPerBatch:(unsigned long long)arg7 eventStreams:(id)arg8 maxBatches:(unsigned long long)arg9;

@end
