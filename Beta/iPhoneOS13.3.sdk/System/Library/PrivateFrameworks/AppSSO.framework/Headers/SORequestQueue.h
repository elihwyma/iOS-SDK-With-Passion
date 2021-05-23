/*
 Image: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SORequestQueue : NSObject

{
    NSMutableArray *_queue;
    id _processingItem;
    CDUnknownBlockType _processItemBlock;
}

@property (copy, nonatomic) CDUnknownBlockType processItemBlock;

+ (id)debugDescription;
+ (id)requestQueueWithIdentifier:(id)arg1;

- (id)init;
- (id)description;
- (void)enqueueRequest:(id)arg1;
- (void)_processItem:(id)arg1;
- (void)_itemCompleted;
- (void)processNextRequest;
- (void)removeAllRequestsWithBlock:(CDUnknownBlockType)arg1;

@end
