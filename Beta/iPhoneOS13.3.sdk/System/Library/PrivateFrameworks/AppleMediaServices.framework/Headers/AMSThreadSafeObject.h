/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface AMSThreadSafeObject : NSObject

{
    id _object;
    NSObject<OS_dispatch_queue> *_objectAccessQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *objectAccessQueue;
@property (retain, nonatomic) id object;

- (id)init;
- (id)initWithObject:(id)arg1;
- (id)accessAndSetObjectWithBlock:(CDUnknownBlockType)arg1;

@end
