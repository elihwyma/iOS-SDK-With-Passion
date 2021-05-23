/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUIButton.h>

@class NSString;

@interface SALCMLiveTuneInButton : SAUIButton

@property (copy, nonatomic) NSString *liveTuneInButtonType;

+ (id)liveTuneInButton;
+ (id)liveTuneInButtonWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
