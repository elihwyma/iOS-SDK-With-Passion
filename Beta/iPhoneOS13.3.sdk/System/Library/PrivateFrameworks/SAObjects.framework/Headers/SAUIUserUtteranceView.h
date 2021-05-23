/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSString;

@interface SAUIUserUtteranceView : SAAceView

@property (copy, nonatomic) NSString *text;

+ (id)userUtteranceView;
+ (id)userUtteranceViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
