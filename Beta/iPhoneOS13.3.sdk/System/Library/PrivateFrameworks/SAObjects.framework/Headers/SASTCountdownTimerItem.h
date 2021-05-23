/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSString, SAUIColor;

@protocol SASTTemplateAction;

@interface SASTCountdownTimerItem : AceObject

@property (retain, nonatomic) id <SASTTemplateAction> action;
@property (nonatomic) long long actionDelayInSeconds;
@property (retain, nonatomic) SAUIColor *bodyBackgroundColor;
@property (retain, nonatomic) SAUIColor *countdownTextColor;
@property (retain, nonatomic) SAUIColor *headerBackgroundColor;
@property (copy, nonatomic) NSString *headerText;
@property (retain, nonatomic) SAUIColor *headerTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)countdownTimerItem;
+ (id)countdownTimerItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
