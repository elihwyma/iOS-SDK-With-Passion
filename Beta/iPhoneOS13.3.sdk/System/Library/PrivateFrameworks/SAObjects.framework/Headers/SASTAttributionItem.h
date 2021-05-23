/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSString, SAUINanoImageResource;

@protocol SASTTemplateAction;

@interface SASTAttributionItem : AceObject

@property (retain, nonatomic) id <SASTTemplateAction> action;
@property (copy, nonatomic) NSString *attributionPosition;
@property (retain, nonatomic) SAUINanoImageResource *imageResource;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)attributionItem;
+ (id)attributionItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
