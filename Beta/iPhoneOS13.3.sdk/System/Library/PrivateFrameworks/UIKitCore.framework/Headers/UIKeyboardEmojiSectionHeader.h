/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionReusableView.h>

@class NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView

{
    UILabel *_emojiSectionHeader;
}

@property (copy, nonatomic) NSString *headerName;
@property (copy, nonatomic) UIColor *headerTextColor;
@property (nonatomic) double headerFontSize;
@property (nonatomic) double headerOpacity;
@property (nonatomic) _Bool useVibrantBlend;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
