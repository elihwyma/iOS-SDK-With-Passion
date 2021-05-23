/*
 Image: /System/Library/PrivateFrameworks/ContentIndex.framework/ContentIndex
 */

#import <Foundation/NSObject.h>

@class CXIndex, NSArray;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CXQuery : NSObject

{
    _Bool _started;
    _Bool _complete;
    _Bool _canceled;
    _Bool _waiting;
    CXIndex *_index;
    struct __SIQuery *_siQuery;
    struct __SIResultQueue *_resultQueue;
    struct __SIJobRef *_job;
    CDStruct_4e0944f1 *_batch;
    long long _batchOffset;
    NSArray *_batchValues;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (nonatomic, readonly) CXIndex *index;
@property (nonatomic, readonly) struct __SIQuery *siQuery;
@property (nonatomic, readonly) struct __SIResultQueue *resultQueue;
@property (nonatomic, readonly) struct __SIJobRef *job;
@property (nonatomic, readonly) CDStruct_4e0944f1 *batch;
@property (nonatomic, readonly) long long batchOffset;
@property (nonatomic, readonly) NSArray *batchValues;
@property (nonatomic, readonly) _Bool started;
@property (nonatomic, readonly) _Bool complete;
@property (nonatomic, readonly) _Bool canceled;
@property (nonatomic, readonly) _Bool waiting;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;

+ (void)initialize;

- (void)dealloc;
- (void)cancel;
- (_Bool)start;
- (unsigned int)getResults:(unsigned int *)arg1 docNames:(id *)arg2 valueLists:(id *)arg3 maxCount:(unsigned int)arg4;
- (id)initWithSting:(id)arg1 forIndex:(id)arg2 withOptions:(id)arg3;
- (void)processResults:(_Bool)arg1;
- (_Bool)findDocuments:(unsigned int *)arg1 docNames:(id *)arg2 valueLists:(id *)arg3 maxCount:(unsigned int)arg4 timeOut:(double)arg5 foundCount:(unsigned int *)arg6;

@end
