/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVViewDescription.h>

@class NSString, UIImage;

@interface TVImageDescription : TVViewDescription

{
    _Bool _configureForMetrics;
    _Bool _needsRoomBannerImageDecorator;
    _Bool _isInBackgroundOrBanner;
    _Bool _hasGradient;
    id _imageProxy;
    UIImage *_placeholderImage;
    long long _semanticContentAttribute;
    NSString *_accessibilityText;
    NSString *_siriData;
}

@property (nonatomic) _Bool needsRoomBannerImageDecorator;
@property (nonatomic) _Bool isInBackgroundOrBanner;
@property (nonatomic) _Bool hasGradient;
@property (copy, nonatomic) NSString *accessibilityText;
@property (copy, nonatomic) NSString *siriData;
@property (retain, nonatomic) id imageProxy;
@property (nonatomic) _Bool configureForMetrics;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) long long semanticContentAttribute;

- (id)initWithProxy:(id)arg1 andPlaceHolderImage:(id)arg2;

@end
