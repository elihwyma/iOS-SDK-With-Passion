/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSString, _CDAirPlayDataCollectionSession, _CDDateQuantizer;

@protocol OS_xpc_object, _DKKnowledgeQuerying;

@interface _CDAirPlayDataCollectionTask : NSObject

{
    _Bool _selectedForDataCollection;
    _Bool _deleteSessionOnCleanup;
    NSObject<OS_xpc_object> *_activity;
    id <_DKKnowledgeQuerying> _storage;
    CDUnknownBlockType _submissionBlock;
    NSString *_dataDirectory;
    NSString *_sessionPath;
    NSDate *_collectionDate;
    NSMutableDictionary *_videoBundleIDLookup;
    _CDAirPlayDataCollectionSession *_session;
    _CDDateQuantizer *_dateQuantizer;
    double _samplingRate;
    unsigned long long _daysPerBatch;
    unsigned long long _maxBatches;
    unsigned long long _airPlayVideoEventCount;
}

@property (copy, nonatomic, readonly) NSString *dataDirectory;
@property (copy, nonatomic, readonly) NSString *dataPath;
@property (copy, nonatomic, readonly) NSString *sessionPath;
@property (copy, nonatomic, readonly) NSDate *collectionDate;
@property (nonatomic, readonly) NSMutableDictionary *videoBundleIDLookup;
@property (retain, nonatomic) _CDAirPlayDataCollectionSession *session;
@property (nonatomic, readonly) _CDDateQuantizer *dateQuantizer;
@property (nonatomic, readonly) double samplingRate;
@property (nonatomic, readonly) unsigned long long daysPerBatch;
@property (nonatomic, readonly) unsigned long long maxBatches;
@property (nonatomic) unsigned long long airPlayVideoEventCount;
@property (nonatomic) _Bool selectedForDataCollection;
@property (nonatomic) _Bool deleteSessionOnCleanup;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;
@property (nonatomic, readonly) id <_DKKnowledgeQuerying> storage;
@property (copy, nonatomic) CDUnknownBlockType submissionBlock;

- (id)initWithStorage:(id)arg1 activity:(id)arg2 sessionPath:(id)arg3 dataDirectory:(id)arg4 collectionDate:(id)arg5 samplingRate:(double)arg6 daysPerBatch:(unsigned long long)arg7 maxBatches:(unsigned long long)arg8;
- (void)_execute;
- (void)cleanup;
- (id)truncatedFileHandle;
- (id)filterEventsByLongFormVideoAppEvents:(id)arg1;
- (void)writeEvents:(id)arg1 handle:(id)arg2;
- (_Bool)submitDataForCollection;
- (id)initWithStorage:(id)arg1 activity:(id)arg2;
- (void)execute;

@end
