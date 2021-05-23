/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet;

@protocol OS_dispatch_queue;

@interface ATXScreenRepresentation : NSObject

{
    NSMutableOrderedSet *_scr;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (id)getAllObjects;
- (unsigned long long)findPosition:(id)arg1;

@end
