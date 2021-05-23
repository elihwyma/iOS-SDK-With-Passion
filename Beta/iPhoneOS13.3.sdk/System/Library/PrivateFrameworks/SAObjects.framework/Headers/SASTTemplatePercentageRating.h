/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASTTemplateRating.h>

@class SAUIDecoratedText, SAUILocalImageResource;

@interface SASTTemplatePercentageRating : SASTTemplateRating

@property (retain, nonatomic) SAUILocalImageResource *localImageResource;
@property (retain, nonatomic) SAUIDecoratedText *value;

+ (id)templatePercentageRating;
+ (id)templatePercentageRatingWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
