/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIFont.h>

@interface UIFont (IC)

+ (id)ic_preferredFontForBodyText;
+ (struct UIFont *)ic_preferredFontForStyle:(unsigned int)arg1 contentSizeCategory:(id)arg2;
+ (double)ic_preferredAttachmentTextScale;
+ (struct UIFont *)ic_preferredFontForTitleTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)ic_preferredFontForHeadingTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)ic_preferredFontForSubheadingTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)ic_preferredFontForBodyTextWithContentSizeCategory:(id)arg1;
+ (id)ic_preferredFontForDateTextWithZoomFactor:(double)arg1;
+ (id)ic_preferredFontForFixedWidthTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)ic_preferredSystemFontWithBaseSize:(double)arg1 withContentSizeCategory:(id)arg2 minSize:(double)arg3;
+ (double)ic_pointSizeForBodyTextWithContentSizeCategory:(id)arg1;
+ (id)ic_preferredFontForSubheadingText;
+ (struct UIFont *)ic_preferredFontForTextStyle:(id)arg1 adjustedForDefaultSize:(double)arg2 maxSize:(double)arg3;
+ (double)ic_preferredFontSizeWithBaseSize:(double)arg1 withContentSizeCategory:(id)arg2 minSize:(double)arg3 maxSize:(double)arg4;
+ (id)ic_contentSizeCategories;
+ (long long)ic_stepsBetweenContentSizeCategory:(id)arg1 andCategory:(id)arg2;
+ (id)ic_preferredFontForTitleText;
+ (id)ic_preferredFontForHeadingText;
+ (id)ic_preferredFontForDateText;
+ (id)ic_preferredFontForFixedWidthText;
+ (id)ic_preferredFontForAttachmentRegularText;
+ (id)ic_preferredFontForAttachmentBoldText;
+ (struct UIFont *)ic_listViewTitleFont;
+ (struct UIFont *)ic_listViewDetailFont;
+ (struct UIFont *)ic_attachmentBrowserTitleFont;
+ (struct UIFont *)ic_gridViewSectionTitleFont;
+ (struct UIFont *)ic_gridViewNoteTitleFont;
+ (struct UIFont *)ic_gridViewNoteSubtitleFont;
+ (struct UIFont *)ic_navBarButtonFontUsingSingleLineA:(_Bool)arg1;
+ (struct UIFont *)ic_recentlyDeletedHeaderFont;
+ (double)ic_fontSizeForHeaderImport;
+ (double)ic_fontSizeForSubheaderImport;
+ (struct UIFont *)ic_preferredFontForTextStyle:(id)arg1 adjustedForDefaultSize:(double)arg2;

- (_Bool)ic_fontHasSingleLineA;
- (id)ic_fontWithSingleLineA;
- (id)ic_fontWithoutSingleLineA;
- (id)ic_fontWithTabularNumbers;
- (id)ic_fontConvertedToSize:(double)arg1;
- (id)ic_fontWithSize:(double)arg1;

@end
