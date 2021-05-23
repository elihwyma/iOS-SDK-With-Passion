/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSHashTable;

@protocol HMFLocking;

__attribute__((visibility("hidden")))
@interface __HMFActivityManager

{
    id <HMFLocking> _lock;
    NSHashTable *_activities;
}

- (id)init;

@end
