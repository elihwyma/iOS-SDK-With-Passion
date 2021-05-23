/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSCondition, NSMutableSet, NSString;

@interface PLSemaphore : NSObject

{
    double _timeout;
    NSMutableSet *_interestedObjects;
    NSMutableSet *_pendingDoneObjects;
    NSString *_key;
    NSCondition *_pendingObjectsLock;
}

@property (retain) NSCondition *pendingObjectsLock;
@property double timeout;
@property (retain) NSMutableSet *interestedObjects;
@property (retain) NSMutableSet *pendingDoneObjects;
@property (retain) NSString *key;
@property (readonly) _Bool isActive;

+ (id)sharedSemaphoreForKey:(id)arg1;

- (id)initWithKey:(id)arg1;
- (void)signalStartListening;
- (void)waitWithBlock:(CDUnknownBlockType)arg1;
- (void)signalInterestByObject:(id)arg1;
- (void)signalDoneByObject:(id)arg1;
- (void)waitWithBlockSync:(CDUnknownBlockType)arg1;
- (void)signalNonInterestByObject:(id)arg1;

@end
