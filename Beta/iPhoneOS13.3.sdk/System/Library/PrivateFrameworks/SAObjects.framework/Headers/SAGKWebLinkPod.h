/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAGKPodView.h>

@class NSArray;

@interface SAGKWebLinkPod : SAGKPodView

@property (copy, nonatomic) NSArray *links;

+ (id)webLinkPod;
+ (id)webLinkPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
