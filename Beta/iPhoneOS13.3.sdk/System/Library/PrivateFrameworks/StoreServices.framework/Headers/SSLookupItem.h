/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface SSLookupItem : NSObject

{
    NSDictionary *_dictionary;
}

@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) NSArray *artwork;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSArray *categoryNames;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *itemKind;
@property (nonatomic, readonly) NSNumber *ITunesStoreIdentifier;
@property (nonatomic, readonly) NSArray *offers;
@property (nonatomic, readonly, getter=isPOIBased) _Bool POIBased;
@property (nonatomic, readonly) NSURL *productPageURL;
@property (nonatomic, readonly) long long numberOfUserRatings;
@property (nonatomic, readonly) float userRating;
@property (nonatomic, readonly) long long numberOfUserRatingsForCurrentVersion;
@property (nonatomic, readonly) float userRatingForCurrentVersion;
@property (nonatomic, readonly) NSDictionary *lookupDictionary;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLookupDictionary:(id)arg1;

@end
