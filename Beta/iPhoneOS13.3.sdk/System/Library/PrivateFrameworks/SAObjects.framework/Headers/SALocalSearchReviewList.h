/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL, SALocalSearchRating;

@interface SALocalSearchReviewList : AceObject <Swift>

@property (copy, nonatomic) NSURL *providerId;
@property (copy, nonatomic) NSString *providerId2;
@property (retain, nonatomic) SALocalSearchRating *rating;
@property (copy, nonatomic) NSArray *selectReviews;
@property (copy, nonatomic) NSNumber *totalReviewCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reviewList;
+ (id)reviewListWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
