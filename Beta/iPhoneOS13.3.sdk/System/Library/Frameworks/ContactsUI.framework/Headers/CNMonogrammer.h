/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIColor, UIFont, UIImage;

@interface CNMonogrammer : NSObject

{
    UIImage *_silhouetteMonogram;
    UIImage *_questionMarkMonogram;
    UIImage *_knockoutMaskMonogram;
    double _innerBorderWidth;
    NSString *_silhouetteImageName;
    long long _monogrammerStyle;
    CNMonogrammer *_subMonogrammer;
    UIColor *_tintColor;
    double _scale;
    _Bool _textKnockout;
    UIFont *_font;
    double _diameter;
    UIColor *_backgroundColor;
    UIColor *_textColor;
}

@property (nonatomic) double diameter;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) _Bool textKnockout;
@property (nonatomic, readonly) UIImage *silhouetteMonogram;
@property (nonatomic, readonly) UIImage *questionMarkMonogram;
@property (nonatomic, readonly) UIImage *knockoutMaskMonogram;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic, readonly) NSArray *keysToFetch;

+ (id)_initialsForContact:(id)arg1;
+ (id)descriptorForRequiredKeysIncludingImage:(_Bool)arg1;
+ (long long)monogramTypeForContact:(id)arg1;
+ (id)requiredKeyDescriptor;

- (id)init;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 diameter:(double)arg2;
- (id)monogramForPersonWithFirstName:(id)arg1 lastName:(id)arg2;
- (void)monogramsAsFlatImages;
- (void)monogramsWithTint:(id)arg1;
- (void)monogramsForStark;
- (double)innerBorderWidth;
- (id)silhouetteImageName;
- (id)monogramForContact:(id)arg1 isContactImage:(_Bool *)arg2;
- (id)monogramForContact:(id)arg1;
- (id)monogramForContacts:(id)arg1;
- (void)_clearMonogramCache;
- (id)_initialsForFirstName:(id)arg1 lastName:(id)arg2;
- (id)_copyMonogramWithImageData:(id)arg1;
- (id)_copyMonogramWithInitials:(id)arg1;
- (id)_copyMonogramWithSilhouette;
- (id)_copyMonogramWithKnockoutMask;

@end
