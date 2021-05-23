/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, SSItemArtworkImage;

@interface SSItemContentRating : NSObject

{
    NSMutableDictionary *_dictionary;
}

@property (nonatomic, readonly) NSDictionary *contentRatingDictionary;
@property (nonatomic, readonly) SSItemArtworkImage *ratingSystemLogo;
@property (nonatomic, readonly, getter=isExplicitContent) _Bool explicitContent;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *ratingDescription;
@property (copy, nonatomic) NSString *ratingLabel;
@property (nonatomic) long long ratingSystem;
@property (nonatomic, readonly, getter=isRestricted) _Bool restricted;
@property (nonatomic) _Bool shouldHideWhenRestricted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)ratingSystemFromString:(id)arg1;
+ (id)stringForRatingSystem:(long long)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (_Bool)_isRatingSystemForApps:(long long)arg1;
- (_Bool)_isRatingSystemForMovies:(long long)arg1;
- (_Bool)_isRatingSystemForMusic:(long long)arg1;
- (_Bool)_isRatingSystemForTV:(long long)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)_setValueCopy:(id)arg1 forProperty:(id)arg2;

@end
