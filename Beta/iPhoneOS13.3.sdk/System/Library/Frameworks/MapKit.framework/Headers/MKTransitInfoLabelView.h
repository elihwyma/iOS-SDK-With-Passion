/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKUILabel.h>

@class MKArtworkDataSourceCache, NSArray;

@interface MKTransitInfoLabelView : _MKUILabel

{
    long long _iconSize;
    double _maxWidth;
    double _spaceBetweenIcons;
    CDUnknownBlockType _textForTruncationGenerator;
    _Bool _hasCustomShieldSize;
    _Bool _hasCustomIconSize;
    _Bool _hasCustomFont;
    long long _shieldSize;
    NSArray *_labelItems;
    double _spaceBetweenShields;
    MKArtworkDataSourceCache *_artworkCache;
}

@property (nonatomic) long long shieldSize;
@property (copy, nonatomic) NSArray *labelItems;
@property (nonatomic) double spaceBetweenShields;
@property (retain, nonatomic) MKArtworkDataSourceCache *artworkCache;

+ (id)stringAttributesForFont:(id)arg1 lineBreakMode:(long long)arg2;
+ (long long)shieldSizeForContentSizeCategory:(id)arg1;
+ (long long)iconSizeForContentSizeCategory:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)setFont:(id)arg1;
- (void)setIconSize:(long long)arg1;
- (void)setMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 maxWidth:(double)arg2;
- (id)initWithLabelItems:(id)arg1 iconSize:(long long)arg2 shieldSize:(long long)arg3 spaceBetweenShields:(double)arg4 maxWidth:(double)arg5;
- (void)_setFont:(id)arg1 custom:(_Bool)arg2;
- (void)_contentSizeCategoryDidChange;
- (void)_setupLabelInfo;
- (id)_generateText;
- (id)_stringAttributes;
- (id)_imageForLabelItem:(id)arg1;
- (id)_imageForArtworkDataSource:(id)arg1;
- (id)_imageForShieldDataSource:(id)arg1;
- (void)setMaxWidth:(double)arg1 textForTruncationGenerator:(CDUnknownBlockType)arg2;
- (void)setSpaceBetweenIcons:(double)arg1;

@end
