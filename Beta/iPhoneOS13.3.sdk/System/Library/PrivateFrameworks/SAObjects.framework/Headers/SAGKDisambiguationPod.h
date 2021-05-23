/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAGKPodView.h>

@class NSString;

@interface SAGKDisambiguationPod : SAGKPodView

@property (copy, nonatomic) NSString *text;

+ (id)disambiguationPod;
+ (id)disambiguationPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
