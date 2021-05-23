/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMapTable;

@protocol OS_dispatch_queue;

@interface BKSAnimationFenceObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_handleNameToTraceMap;
    NSMapTable *_handleNameToFenceNameMap;
    NSMapTable *_fenceNameToHandleNamesMap;
    NSMapTable *_fenceNameToDeathSentinelMap;
    NSHashTable *_validDeathSentinelsTable;
    unsigned int _lastHandleName;
    unsigned int _encodeCount;
}

+ (id)sharedInstance;
+ (int)pidFromEncodeIdentifier:(unsigned long long)arg1;
+ (unsigned int)countFromEncodeIdentifier:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned long long)addHandle:(id)arg1;
- (void)removeHandleWithName:(unsigned long long)arg1;
- (unsigned long long)nextEncodeIdentifier;

@end
