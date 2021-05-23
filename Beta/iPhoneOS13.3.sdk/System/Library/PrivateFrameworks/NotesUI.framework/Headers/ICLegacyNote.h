/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@interface ICLegacyNote : NSObject

+ (id)temporaryTextStorageWithAttributedString:(id)arg1 replicaID:(id)arg2;
+ (void)importLegacyNote:(id)arg1 temporaryTextStorage:(id)arg2 toNote:(id)arg3;
+ (void)copyValuesFromLegacyNote:(id)arg1 toNote:(id)arg2;

@end
