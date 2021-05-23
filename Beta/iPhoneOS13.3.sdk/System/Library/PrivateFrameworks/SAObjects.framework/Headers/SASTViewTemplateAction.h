/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSArray, NSString, SASTItemGroup;

@interface SASTViewTemplateAction : AceObject

@property (copy, nonatomic) NSArray *commands;
@property (retain, nonatomic) SASTItemGroup *itemGroupView;
@property (copy, nonatomic) NSString *viewTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)viewTemplateAction;
+ (id)viewTemplateActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
