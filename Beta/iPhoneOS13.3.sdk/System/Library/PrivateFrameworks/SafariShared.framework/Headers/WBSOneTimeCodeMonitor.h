/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class IMOneTimeCodeAccelerator, NSArray, NSHashTable;

@protocol OS_dispatch_queue;

@interface WBSOneTimeCodeMonitor : NSObject

{
    IMOneTimeCodeAccelerator *_oneTimeCodeAccelerator;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSArray *_codes;
    NSHashTable *_observers;
}

@property (copy, nonatomic, readonly) NSArray *codes;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)consumeCode:(id)arg1;

@end
