/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAARParaphrasedSuggestedResultsPod : SAAceView

@property (copy, nonatomic) NSArray *suggestedResults;
@property (copy, nonatomic) NSString *title;

+ (id)paraphrasedSuggestedResultsPod;
+ (id)paraphrasedSuggestedResultsPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
