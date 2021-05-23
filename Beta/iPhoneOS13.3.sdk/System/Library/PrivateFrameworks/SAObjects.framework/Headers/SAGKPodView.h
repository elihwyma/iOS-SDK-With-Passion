/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSString;

@interface SAGKPodView : SAAceView

@property (copy, nonatomic) NSString *title;

+ (id)podView;
+ (id)podViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
