/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <Foundation/NSObject.h>

@class UIFont, UIFontDescriptor;

@interface PLCommentsFontCache : NSObject

{
    UIFontDescriptor *__shortCaptionFontDescriptor;
    UIFontDescriptor *__emphasizedShortCaptionFontDescriptor;
    UIFontDescriptor *__shortSubheadlineFontDescriptor;
    UIFontDescriptor *__bodyFontDescriptor;
    UIFontDescriptor *__emphasizedBodyFontDescriptor;
    UIFontDescriptor *__shortBodyFontDescriptor;
}

@property (nonatomic, readonly) UIFont *youLikeFont;
@property (nonatomic, readonly) UIFont *likeFont;
@property (nonatomic, readonly) UIFont *commentTextFont;
@property (nonatomic, readonly) UIFont *commentAttributionDateFont;
@property (nonatomic, readonly) UIFont *commentAttributionNameFont;
@property (nonatomic, readonly) UIFont *commentEntryFont;
@property (nonatomic, readonly) UIFont *commentSendButtonFont;

+ (id)sharedCache;

- (id)init;
- (void)dealloc;
- (void)_invalidateCache;
- (void)_contentSizesDidChange:(id)arg1;
- (id)_shortCaptionFontDescriptor;
- (id)_emphasizedShortCaptionFontDescriptor;
- (id)_shortSubheadlineFontDescriptor;
- (id)_bodyFontDescriptor;
- (id)_emphasizedBodyFontDescriptor;
- (id)_shortBodyFontDescriptor;

@end
