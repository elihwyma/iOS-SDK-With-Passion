/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSArray, NSString, SAUIDecoratedText, SAUINanoImageResource;

@protocol SASTTemplateAction;

@interface SASTColumnDataListItem : AceObject

@property (retain, nonatomic) id <SASTTemplateAction> action;
@property (copy, nonatomic) NSArray *decoratedRows;
@property (retain, nonatomic) SAUINanoImageResource *imageResource;
@property (copy, nonatomic) NSString *rowLayout;
@property (retain, nonatomic) SAUIDecoratedText *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)columnDataListItem;
+ (id)columnDataListItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
