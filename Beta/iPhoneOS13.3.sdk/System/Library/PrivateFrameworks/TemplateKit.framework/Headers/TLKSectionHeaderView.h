/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class TLKLabel, TLKMultilineText, TLKProminenceView;

@interface TLKSectionHeaderView

{
    TLKMultilineText *_headerText;
    TLKLabel *_headerTextLabel;
    TLKProminenceView *_backgroundView;
}

@property (retain, nonatomic) TLKLabel *headerTextLabel;
@property (retain, nonatomic) TLKProminenceView *backgroundView;
@property (retain, nonatomic) TLKMultilineText *headerText;

- (id)headerLabelText;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (_Bool)usesDefaultInsets;

@end
