/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DOCUserInterfaceStateStore : NSObject

{
    NSMutableDictionary *_uiStateMap;
}

@property (retain) NSMutableDictionary *uiStateMap;

+ (id)sharedStore;

- (id)init;
- (id)_loadUserInterfaceStateFromDefaultsForConfiguration:(id)arg1;
- (id)mostRecentInterfaceStateForConfiguration:(id)arg1;
- (id)docUserDefaults;
- (void)_writeUserInterfaceStateToDefaultsForConfiguration:(id)arg1;
- (void)_writeMostRecentUserInterfaceStateToDefaultsForConfiguration:(id)arg1;
- (void)_pruneOldState;
- (id)_sortedInterfaceStateKeys;
- (id)interfaceStateForConfiguration:(id)arg1;
- (void)updateInterfaceState:(id)arg1 forConfiguration:(id)arg2;
- (void)purgeStateForConfiguration:(id)arg1;

@end
