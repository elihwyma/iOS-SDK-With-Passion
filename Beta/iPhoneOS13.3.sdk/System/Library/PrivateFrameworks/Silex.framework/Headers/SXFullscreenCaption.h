/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXFormattedText;

@protocol SXFullscreenCaptionDataSource;

@interface SXFullscreenCaption : NSObject

{
    NSString *_text;
    SXFormattedText *_caption;
    id <SXFullscreenCaptionDataSource> _dataSource;
}

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) SXFormattedText *caption;
@property (weak, nonatomic, readonly) id <SXFullscreenCaptionDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)textStyleForIdentifier:(id)arg1;
- (id)componentTextStyleForTextSource:(id)arg1 inheritingFromDefaultStyles:(_Bool)arg2;
- (id)textResizerForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)additionsForTextSource:(id)arg1;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (id)defaultComponentTextStyleForTextSource:(id)arg1;
- (id)defaultComponentTextStylesForTextSource:(id)arg1;
- (id)linkStyleForTextSource:(id)arg1;
- (id)initWithText:(id)arg1 dataSource:(id)arg2;
- (id)initWithCaption:(id)arg1 dataSource:(id)arg2;

@end
