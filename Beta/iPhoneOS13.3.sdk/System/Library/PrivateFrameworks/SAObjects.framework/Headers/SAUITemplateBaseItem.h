/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseAceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, SAUITemplateEdgeInsets;

@interface SAUITemplateBaseItem : SABaseAceObject <Swift>

@property (copy, nonatomic) NSArray *communicationOptions;
@property (retain, nonatomic) SAUITemplateEdgeInsets *fullScreenPaddingDelta;
@property (nonatomic) _Bool hasPriorityLayout;
@property (retain, nonatomic) SAUITemplateEdgeInsets *padding;
@property (copy, nonatomic) NSArray *presentationOptions;
@property (nonatomic) _Bool shouldBeOffscreenInPartial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)baseItem;
+ (id)baseItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
