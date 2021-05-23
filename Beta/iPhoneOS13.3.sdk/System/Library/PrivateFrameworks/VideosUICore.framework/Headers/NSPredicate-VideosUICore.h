/*
 Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
 */

#import <Foundation/NSPredicate.h>

@interface NSPredicate (VideosUICore)

+ (id)vui_predicateWithSubpredicates:(id)arg1 type:(unsigned long long)arg2;
+ (id)vui_equalPredicateWithKeyPath:(id)arg1 value:(id)arg2;
+ (id)vui_inPredicateWithKeyPath:(id)arg1 value:(id)arg2;
+ (id)vui_keyPathBitTestPredicateWithKeyPath:(id)arg1 value:(id)arg2;
+ (id)_vui_keyPathsInPredicate:(id)arg1;
+ (id)_vui_keyPathsInCompoundPredicate:(id)arg1;
+ (id)_vui_keyPathsInComparisonPredicate:(id)arg1;
+ (id)vui_notEqualPredicateWithKeyPath:(id)arg1 value:(id)arg2;

- (id)vui_keyPathsInPredicate;

@end
