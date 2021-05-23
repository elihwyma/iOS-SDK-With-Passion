/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class NSArray, NSString, SFActionItem, SFButton, SFFormattedText, SFImage, SFRichText, SFText;

@interface SearchUIDetailedRowModel

{
    _Bool _preventThumbnailImageScaling;
    _Bool _isLocalApplicationResult;
    _Bool _secondaryTitleIsDetached;
    SFImage *_leadingImage;
    SFImage *_fallbackImage;
    SFButton *_leadingButton;
    NSString *_applicationBundleIdentifier;
    SFRichText *_title;
    SFText *_secondaryTitle;
    SFImage *_secondaryTitleImage;
    NSArray *_details;
    SFRichText *_footnote;
    NSString *_footnoteButtonText;
    SFActionItem *_action;
    SFFormattedText *_trailingTopText;
    SFFormattedText *_trailingMiddleText;
    SFFormattedText *_trailingBottomText;
    NSArray *_contactIdentifiersNeeded;
}

@property (retain) SFImage *leadingImage;
@property (retain) SFImage *fallbackImage;
@property (retain) SFButton *leadingButton;
@property (retain) NSArray *contactIdentifiersNeeded;
@property _Bool preventThumbnailImageScaling;
@property (retain) NSString *applicationBundleIdentifier;
@property _Bool isLocalApplicationResult;
@property (retain) SFRichText *title;
@property (retain) SFText *secondaryTitle;
@property _Bool secondaryTitleIsDetached;
@property (retain) SFImage *secondaryTitleImage;
@property (retain) NSArray *details;
@property (retain) SFRichText *footnote;
@property (retain) NSString *footnoteButtonText;
@property (retain) SFActionItem *action;
@property (retain) SFFormattedText *trailingTopText;
@property (retain) SFFormattedText *trailingMiddleText;
@property (retain) SFFormattedText *trailingBottomText;

+ (_Bool)urlIsDraggable:(id)arg1;

- (int)separatorStyle;
- (id)contactIdentifiers;
- (id)descriptionText;
- (_Bool)isContact;
- (_Bool)isDraggable;
- (id)punchouts;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 isInline:(_Bool)arg3 queryId:(unsigned long long)arg4;
- (Class)customCardSectionViewClass;
- (id)dragURL;
- (id)dragTitle;
- (id)dragText;
- (id)dragSubtitle;
- (_Bool)isTappable;
- (id)dragAppBundleID;
- (void)fillOutPropertiesForCardSection:(id)arg1;
- (id)richTextFromText:(id)arg1;

@end
