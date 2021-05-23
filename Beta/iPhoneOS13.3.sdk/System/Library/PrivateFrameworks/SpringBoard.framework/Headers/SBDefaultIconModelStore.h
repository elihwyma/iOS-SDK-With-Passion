/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardHome/SBIconModelPropertyListFileStore.h>

@interface SBDefaultIconModelStore : SBIconModelPropertyListFileStore

+ (id)sharedInstance;

- (id)init;
- (_Bool)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)loadDesiredIconState:(id *)arg1;
- (id)loadCurrentIconState:(id *)arg1;
- (_Bool)saveDesiredIconState:(id)arg1 error:(id *)arg2;
- (void)_deleteLegacyState;

@end
