/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSFormToABBinder : NSObject

+ (id)specifierForLabel:(id)arg1;
+ (id)allSynonymsForMatch:(id)arg1 formAppearsToBeChinese:(_Bool)arg2;
+ (id)specifierForAutocompleteToken:(id)arg1;
+ (unsigned long long)indexOfBestMatchForString:(id)arg1 inArray:(id)arg2 startingPosition:(unsigned long long *)arg3;
+ (struct __WBSFieldLabelPatternMatcherArray *)addressBookFieldLabelPatternMatchers;
+ (struct __WBSFieldLabelPatternMatcherArray *)emailFieldLabelPatternMatchers;

@end
