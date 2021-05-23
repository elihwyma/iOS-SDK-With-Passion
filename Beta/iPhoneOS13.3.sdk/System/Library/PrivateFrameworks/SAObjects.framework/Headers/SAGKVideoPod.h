/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAGKPodView.h>

@class NSArray;

@interface SAGKVideoPod : SAGKPodView

@property (copy, nonatomic) NSArray *videos;

+ (id)videoPod;
+ (id)videoPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
