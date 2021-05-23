/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAGKPodView.h>

@class NSArray;

@interface SAGKImagePod : SAGKPodView

@property (copy, nonatomic) NSArray *images;

+ (id)imagePod;
+ (id)imagePodWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
