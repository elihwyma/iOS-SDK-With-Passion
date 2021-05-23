/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKeyboardSliceStore : NSObject

{
    NSMutableDictionary *_store;
}

+ (id)sliceSetIDForKeyplaneName:(id)arg1 type:(long long)arg2 orientation:(long long)arg3;
+ (void)archiveSet:(id)arg1;
+ (id)sharedStore;
+ (id)sliceSetForID:(id)arg1;

- (id)init;
- (id)sliceSetForID:(id)arg1;
- (void)addSet:(id)arg1;

@end
