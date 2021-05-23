/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASTTemplateRating.h>

@interface SASTTemplateStarRating : SASTTemplateRating

@property (nonatomic) double maximumValue;
@property (nonatomic) double value;

+ (id)templateStarRating;
+ (id)templateStarRatingWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
