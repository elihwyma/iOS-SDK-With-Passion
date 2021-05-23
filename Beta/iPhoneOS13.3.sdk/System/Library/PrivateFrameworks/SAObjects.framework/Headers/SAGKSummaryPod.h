/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAGKPodView.h>

@class NSString, SAUIImageResource;

@interface SAGKSummaryPod : SAGKPodView

@property (copy, nonatomic) NSString *caption;
@property (retain, nonatomic) SAUIImageResource *imageResource;
@property (copy, nonatomic) NSString *text;

+ (id)summaryPod;
+ (id)summaryPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
