/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAGKPodView.h>

@class NSString, SAUIAppPunchOut;

@interface SAGKSourceLinkPod : SAGKPodView

@property (copy, nonatomic) NSString *linkText;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;

+ (id)sourceLinkPod;
+ (id)sourceLinkPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
