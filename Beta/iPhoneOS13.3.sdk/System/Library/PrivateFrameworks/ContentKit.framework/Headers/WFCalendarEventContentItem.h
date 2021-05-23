/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFCalendarItemContentItem.h>

@class EKEvent;

@interface WFCalendarEventContentItem : WFCalendarItemContentItem

@property (nonatomic, readonly) EKEvent *event;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)filterDescription;
+ (id)pluralFilterDescription;
+ (_Bool)hasLibrary;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)itemWithEKEvent:(id)arg1 fromEventStore:(id)arg2;

- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (_Bool)canGenerateRepresentationForType:(id)arg1;

@end
