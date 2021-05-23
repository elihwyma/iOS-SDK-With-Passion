/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICEResultWaitQueue : NSObject

{
    NSMutableArray *queryList;
    struct _opaque_pthread_cond_t resCond;
    struct _opaque_pthread_mutex_t resMutex;
}

- (id)init;
- (void)dealloc;
- (id)copyResultForCallID:(unsigned int)arg1;
- (void)addResult:(struct tagCONNRESULT *)arg1 forCallID:(unsigned int)arg2;

@end
