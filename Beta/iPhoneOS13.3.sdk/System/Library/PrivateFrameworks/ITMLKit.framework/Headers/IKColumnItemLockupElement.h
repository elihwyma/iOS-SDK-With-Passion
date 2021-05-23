/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKButtonElement, IKImageElement, IKOrdinalElement, IKTextBadgeAttachment, IKTextElement, IKVideoElement, NSArray, NSString;

@interface IKColumnItemLockupElement : IKViewElement

@property (copy, nonatomic, readonly) NSString *columnItemType;
@property (retain, nonatomic, readonly) IKTextElement *title;
@property (retain, nonatomic, readonly) IKTextElement *subtitle;
@property (retain, nonatomic, readonly) IKTextElement *secondarySubtitle;
@property (retain, nonatomic, readonly) IKTextElement *descriptionText;
@property (retain, nonatomic, readonly) IKOrdinalElement *ordinal;
@property (nonatomic, readonly) IKImageElement *image;
@property (nonatomic, readonly) NSArray *images;
@property (nonatomic, readonly) IKTextBadgeAttachment *titleBadge;
@property (nonatomic, readonly) IKTextBadgeAttachment *subtitleBadge;
@property (retain, nonatomic, readonly) IKButtonElement *button;
@property (retain, nonatomic, readonly) IKVideoElement *video;
@property (retain, nonatomic, readonly) NSArray *textElements;
@property (nonatomic, readonly) _Bool hasSeparator;
@property (nonatomic, readonly) _Bool isWatchlisted;
@property (nonatomic, readonly) _Bool onlyVisibleOnColumnHighlight;

- (void)_computeTitle:(id *)arg1 subtitle:(id *)arg2 secondarySubtitle:(id *)arg3 unstyledTextElements:(id *)arg4;

@end
