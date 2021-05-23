/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable;

@interface SBSwitcherDemoFilteringController : NSObject

{
    NSHashTable *_observers;
    NSArray *_hiddenApplicationBundleIDs;
}

@property (copy, nonatomic) NSArray *hiddenApplicationBundleIDs;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
