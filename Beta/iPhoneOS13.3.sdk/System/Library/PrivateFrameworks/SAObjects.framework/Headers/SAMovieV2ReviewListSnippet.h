/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSString, SALocalSearchReviewList;

@interface SAMovieV2ReviewListSnippet : SAUISnippet

@property (copy, nonatomic) NSString *movieName;
@property (retain, nonatomic) SALocalSearchReviewList *reviewList;

+ (id)reviewListSnippet;
+ (id)reviewListSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
