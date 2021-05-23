/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, SSItemArtworkImage;

@interface SUItemContentRating : NSObject

{
    NSDictionary *_dictionary;
    long long _rank;
    NSString *_ratingDescription;
    NSString *_ratingLabel;
    long long _ratingSystem;
    SSItemArtworkImage *_ratingSystemLogo;
    _Bool _shouldHideWhenRestricted;
}

@property (nonatomic, readonly, getter=isExplicitContent) _Bool explicitContent;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *ratingDescription;
@property (copy, nonatomic) NSString *ratingLabel;
@property (nonatomic) long long ratingSystem;
@property (copy, nonatomic) SSItemArtworkImage *ratingSystemLogo;
@property (nonatomic, readonly, getter=isRestricted) _Bool restricted;
@property (nonatomic) _Bool shouldHideWhenRestricted;

+ (long long)ratingSystemFromString:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (_Bool)_isRatingSystemForApps:(long long)arg1;
- (_Bool)_isRatingSystemForMovies:(long long)arg1;
- (_Bool)_isRatingSystemForMusic:(long long)arg1;
- (_Bool)_isRatingSystemForTV:(long long)arg1;

@end
