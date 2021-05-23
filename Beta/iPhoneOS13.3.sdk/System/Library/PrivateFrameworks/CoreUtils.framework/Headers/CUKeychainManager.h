/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@interface CUKeychainManager : NSObject

- (id)copyItemMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)copyItemsMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)_copyItemsMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)_copyItemsMatchingItemSeparate:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)addItem:(id)arg1 error:(id *)arg2;
- (id)addItem:(id)arg1 returnFlags:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)addOrUpdateOrReAddItem:(id)arg1 logCategory:(struct LogCategory *)arg2 logLabel:(id)arg3 error:(id *)arg4;
- (_Bool)removeItemMatchingItem:(id)arg1 error:(id *)arg2;
- (_Bool)updateItem:(id)arg1 matchingItem:(id)arg2 error:(id *)arg3;

@end
