/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SASTTemplatePercentageRating;

@interface SASTMovieStatItem : AceObject <Swift>

@property (copy, nonatomic) NSString *contentRating;
@property (retain, nonatomic) SASTTemplatePercentageRating *reviewerRating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)movieStatItem;
+ (id)movieStatItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
