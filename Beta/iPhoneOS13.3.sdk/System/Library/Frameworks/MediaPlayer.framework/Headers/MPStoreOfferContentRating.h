/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface MPStoreOfferContentRating : NSObject <Swift>

{
    NSDictionary *_dictionary;
    long long _ratingLevel;
    NSString *_ratingDescription;
    NSString *_ratingLabel;
    unsigned long long _ratingSystem;
}

@property (nonatomic) long long ratingLevel;
@property (copy, nonatomic) NSString *ratingLabel;
@property (nonatomic) unsigned long long ratingSystem;
@property (copy, nonatomic) NSString *ratingDescription;
@property (nonatomic, readonly, getter=isRestrictedContent) _Bool restrictedContent;
@property (nonatomic, readonly, getter=isExplicitContent) _Bool explicitContent;
@property (nonatomic, readonly, getter=isRestrictedPurchase) _Bool restrictedPurchase;
@property (nonatomic, readonly) id mediaPropertyContentRatingValue;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)ratingSystemFromString:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (_Bool)_isRatingSystemForApps:(unsigned long long)arg1;
- (_Bool)_isRatingSystemForMovies:(unsigned long long)arg1;
- (_Bool)_isRatingSystemForMusic:(unsigned long long)arg1;
- (_Bool)_isRatingSystemForTV:(unsigned long long)arg1;

@end
