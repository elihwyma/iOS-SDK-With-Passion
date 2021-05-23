/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SASTTemplatePercentageRating, SAUIDecoratedText;

@interface SASTMovieRatingReviewItem : AceObject <Swift>

@property (retain, nonatomic) SAUIDecoratedText *reviews;
@property (retain, nonatomic) SASTTemplatePercentageRating *templatePercentageRating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)movieRatingReviewItem;
+ (id)movieRatingReviewItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
