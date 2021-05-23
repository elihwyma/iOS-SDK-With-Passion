/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SAUIColor;

@protocol SASTTemplateAction;

@interface SASTSideBySideButtonsItem : AceObject <Swift>

@property (copy, nonatomic) NSString *buttonsViewStyle;
@property (retain, nonatomic) id <SASTTemplateAction> primaryButtonAction;
@property (nonatomic) _Bool primaryButtonEnabled;
@property (copy, nonatomic) NSString *primaryButtonLabel;
@property (retain, nonatomic) SAUIColor *primaryButtonTextColor;
@property (retain, nonatomic) id <SASTTemplateAction> secondaryButtonAction;
@property (nonatomic) _Bool secondaryButtonEnabled;
@property (copy, nonatomic) NSString *secondaryButtonLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sideBySideButtonsItem;
+ (id)sideBySideButtonsItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
