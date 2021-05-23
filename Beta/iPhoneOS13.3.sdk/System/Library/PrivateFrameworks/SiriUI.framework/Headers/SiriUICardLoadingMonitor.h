/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class NSMutableArray;

@interface SiriUICardLoadingMonitor : NSObject

{
    NSMutableArray *_observers;
}

+ (id)sharedInstance;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)isTrackingObserver:(id)arg1;
- (void)broadcastCardSnippet:(id)arg1;

@end
