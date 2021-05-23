/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class CSDataWrapper, CSSearchableIndex, NSData, NSString;

@interface CSSearchableIndexRequest : NSObject

{
    _Bool _shouldThrottle;
    _Bool _started;
    _Bool _finished;
    _Bool _throttled;
    _Atomic unsigned int _requestID;
    unsigned long long _maxRetryCount;
    NSData *_data;
    CDUnknownBlockType _performBlock;
    CDUnknownBlockType _completionDataBlock;
    CDUnknownBlockType _completionBlock;
    CSSearchableIndex *_index;
    NSString *_label;
    CSDataWrapper *_dataWrapper;
    unsigned long long _retryCount;
}

@property (retain, nonatomic) CSSearchableIndex *index;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) CSDataWrapper *dataWrapper;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) _Atomic unsigned int requestID;
@property (nonatomic) _Bool started;
@property (nonatomic) _Bool finished;
@property (nonatomic) _Bool throttled;
@property (nonatomic) unsigned long long maxRetryCount;
@property (nonatomic) _Bool shouldThrottle;
@property (nonatomic, readonly) NSData *data;
@property (copy, nonatomic) CDUnknownBlockType performBlock;
@property (copy, nonatomic) CDUnknownBlockType completionDataBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (void)start;
- (void)finishWithError:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (id)initWithSearchableIndex:(id)arg1 label:(id)arg2;
- (void)retryIfNecessaryWithError:(id)arg1;
- (void)retryIfNecessaryWithError:(id)arg1 dataWrapper:(id)arg2;
- (void)_perform;
- (void)_unthrottleIfNecessary;
- (void)_throttleIfNecessary;

@end
