/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface AMSLookupItem : NSObject

{
    NSDictionary *_itemDictionary;
}

@property (copy, nonatomic, readonly) NSString *artistName;
@property (copy, nonatomic, readonly) NSArray *artwork;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSArray *categoryNames;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic, readonly) NSString *itemKind;
@property (copy, nonatomic, readonly) NSNumber *iTunesStoreIdentifier;
@property (copy, nonatomic, readonly) NSString *offerName;
@property (copy, nonatomic, readonly) NSArray *offers;
@property (nonatomic, readonly, getter=isPOIBased) _Bool POIBased;
@property (copy, nonatomic, readonly) NSURL *productPageURL;
@property (nonatomic, readonly) long long numberOfUserRatings;
@property (nonatomic, readonly) float userRating;
@property (nonatomic, readonly) long long numberOfUserRatingsForCurrentVersion;
@property (nonatomic, readonly) float userRatingForCurrentVersion;
@property (nonatomic, readonly) NSDictionary *itemDictionary;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLookupDictionary:(id)arg1;

@end
