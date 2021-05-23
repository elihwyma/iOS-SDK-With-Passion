/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class NSString, UIImageView;

@interface SiriUIDisambiguationItem : NSObject

{
    _Bool _showsFavoriteStar;
    NSString *_title;
    NSString *_subtitle;
    NSString *_headingText;
    NSString *_extraDisambiguationText;
    NSString *_extraDisambiguationSubText;
    UIImageView *_imageView;
    struct _NSRange _titleBoldedRange;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *headingText;
@property (copy, nonatomic) NSString *extraDisambiguationText;
@property (copy, nonatomic) NSString *extraDisambiguationSubText;
@property (nonatomic) struct _NSRange titleBoldedRange;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) _Bool showsFavoriteStar;

+ (id)disambiguationItem;

@end
