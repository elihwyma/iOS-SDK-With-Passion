/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUItemCellConfiguration.h>

@interface SUPlainTextCellConfiguration : SUItemCellConfiguration

+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;

- (id)init;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (long long)textAlignmentForLabelAtIndex:(unsigned long long)arg1;
- (_Bool)getShadowColor:(id *)arg1 offset:(struct CGSize *)arg2 forLabelAtIndex:(unsigned long long)arg3 withModifiers:(unsigned long long)arg4;
- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (void)reloadImages;
- (void)reloadStrings;
- (void)reloadLayoutInformation;

@end
