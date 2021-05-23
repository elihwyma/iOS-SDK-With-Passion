/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL, SALocalSearchRating;

@interface SALocalSearchBusiness : AceObject <Swift>

@property (copy, nonatomic) NSNumber *businessId;
@property (copy, nonatomic) NSDictionary *businessIds;
@property (copy, nonatomic) NSURL *businessUrl;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *openingHours;
@property (copy, nonatomic) NSArray *phoneNumbers;
@property (copy, nonatomic) NSURL *photo;
@property (retain, nonatomic) SALocalSearchRating *rating;
@property (copy, nonatomic) NSArray *reviews;
@property (nonatomic) long long totalNumberOfReviews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)business;
+ (id)businessWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
