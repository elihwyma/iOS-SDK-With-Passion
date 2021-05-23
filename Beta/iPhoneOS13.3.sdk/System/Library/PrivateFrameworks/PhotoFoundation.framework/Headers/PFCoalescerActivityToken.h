/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PFCoalescerActivityToken : NSObject

{
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSString *_reason;
    NSArray *_callStackReturnAddresses;
    NSDate *_creationDate;
}

@property (retain) NSObject<OS_dispatch_group> *group;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain) NSString *reason;
@property (retain) NSArray *callStackReturnAddresses;
@property (retain) NSDate *creationDate;

- (void)dealloc;
- (id)description;
- (id)initWithDispatchGroup:(id)arg1 reason:(id)arg2;
- (void)endActivity;

@end
