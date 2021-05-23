/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAGKPodView.h>

@class NSArray;

@interface SAGKPropertyPod : SAGKPodView

@property (copy, nonatomic) NSArray *propertyList;

+ (id)propertyPod;
+ (id)propertyPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
