/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSString, SAUIDecoratedText, SAUILocalImageResource;

@protocol SASTTemplateAction;

@interface SASTButtonItem : AceObject

@property (retain, nonatomic) id <SASTTemplateAction> action;
@property (nonatomic) _Bool centered;
@property (retain, nonatomic) SAUIDecoratedText *decoratedLabel;
@property (retain, nonatomic) SAUILocalImageResource *localImageResource;
@property (copy, nonatomic) NSString *position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buttonItem;
+ (id)buttonItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
