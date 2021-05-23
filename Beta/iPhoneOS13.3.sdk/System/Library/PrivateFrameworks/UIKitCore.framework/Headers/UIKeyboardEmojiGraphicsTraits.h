/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@interface UIKeyboardEmojiGraphicsTraits : NSObject

{
    double _emojiKeyWidth;
    double _minimumLineSpacing;
    double _minimumInteritemSpacing;
    double _columnOffset;
    double _sectionOffset;
    double _categoryHeaderHeight;
    double _categoryHeaderLeftPadding;
    double _categorySelectedCirWidth;
    double _scrubViewTopPadding;
    double _categoryHeaderFontSize;
    long long _prepolulatedRecentCount;
    double _inputViewLeftMostPadding;
    double _inputViewRightMostPadding;
    double _rightBiasPercentage;
    double _scrollSnapOffset;
    double _alertTextWidth;
    struct CGSize _fakeEmojiKeySize;
}

@property (nonatomic, readonly) double emojiKeyWidth;
@property (nonatomic, readonly) double minimumLineSpacing;
@property (nonatomic, readonly) double minimumInteritemSpacing;
@property (nonatomic, readonly) double columnOffset;
@property (nonatomic, readonly) double sectionOffset;
@property (nonatomic, readonly) double categoryHeaderHeight;
@property (nonatomic, readonly) double categoryHeaderLeftPadding;
@property (nonatomic, readonly) double categorySelectedCirWidth;
@property (nonatomic, readonly) double scrubViewTopPadding;
@property (nonatomic, readonly) struct CGSize fakeEmojiKeySize;
@property (nonatomic, readonly) double categoryHeaderFontSize;
@property (nonatomic, readonly) long long prepolulatedRecentCount;
@property (nonatomic, readonly) double inputViewLeftMostPadding;
@property (nonatomic, readonly) double inputViewRightMostPadding;
@property (nonatomic, readonly) double rightBiasPercentage;
@property (nonatomic, readonly) double alertTextWidth;
@property (nonatomic, readonly) double scrollSnapOffset;

+ (id)emojiGraphicsTraitsWithScreenTraits:(id)arg1;
+ (id)emojiGraphicsTraitsForCurrentScreenTraits;

- (id)initWithScreenTrait:(id)arg1;

@end
