/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUItemCellConfiguration.h>

@interface SUMediaItemCellConfiguration : SUItemCellConfiguration

@property (nonatomic, readonly) struct CGSize artworkSize;
@property (nonatomic, readonly) long long mediaIconType;
@property (nonatomic, readonly) _Bool showContentRating;

+ (id)copyDefaultContext;

- (void)drawWithModifiers:(unsigned long long)arg1;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (double)alphaForImageAtIndex:(unsigned long long)arg1 fromAlpha:(double *)arg2 withModifiers:(unsigned long long)arg3;
- (double)alphaForLabelAtIndex:(unsigned long long)arg1 fromAlpha:(double *)arg2 withModifiers:(unsigned long long)arg3;
- (void)reloadImages;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (id)initWithStringCount:(unsigned long long)arg1 imageCount:(unsigned long long)arg2;
- (id)copyImageDataProvider;
- (struct UIEdgeInsets)_ratingBorderInsets;

@end
