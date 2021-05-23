/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSString, SAUITemplateEdgeInsets;

@interface SAUITemplateBaseItemGroup : SAUITemplateBaseItem

@property (copy, nonatomic) NSArray *templateItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *communicationOptions;
@property (retain, nonatomic) SAUITemplateEdgeInsets *fullScreenPaddingDelta;
@property (nonatomic) _Bool hasPriorityLayout;
@property (retain, nonatomic) SAUITemplateEdgeInsets *padding;
@property (copy, nonatomic) NSArray *presentationOptions;
@property (nonatomic) _Bool shouldBeOffscreenInPartial;

+ (id)baseItemGroup;
+ (id)baseItemGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
