/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString;

@interface _CNOperationQueueScheduler : NSObject

{
    NSOperationQueue *_queue;
    _Bool _isQualityOfServiceSpecified;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) double timestamp;

+ (id)operationWithQualityOfService:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;

- (id)init;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)initWithMaxConcurrentOperationCount:(long long)arg1;
- (id)initWithMaxConcurrentOperationCount:(long long)arg1 qualityOfService:(unsigned long long)arg2;
- (CDUnknownBlockType)blockWithCurrentQualityOfServiceForBlock:(CDUnknownBlockType)arg1 ifAllowedForRequestedQualityOfService:(unsigned long long)arg2;
- (void)_enqueueBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)initWithQualityOfService:(unsigned long long)arg1;

@end
