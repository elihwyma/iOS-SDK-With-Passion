/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class DOCDocumentSource, DOCSourceSearchingContext, NSString, PSSpecifier;

@interface PSDocumentsPolicyController

{
    _Bool _isFirstSourceResults;
    PSSpecifier *_groupSpecifier;
    DOCDocumentSource *_selectedDocumentSource;
    NSString *_bundleIdentifier;
    DOCSourceSearchingContext *_searchingContext;
}

@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) DOCDocumentSource *selectedDocumentSource;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) DOCSourceSearchingContext *searchingContext;
@property (nonatomic) _Bool isFirstSourceResults;

- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (id)documentSource;
- (void)updateRadioGroupWithSources:(id)arg1 animated:(_Bool)arg2;
- (void)updateFooterAnimated:(_Bool)arg1;
- (void)setDocumentSource:(id)arg1;

@end
