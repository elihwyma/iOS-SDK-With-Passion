/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFGenericFileContentItem.h>

@class EKCalendarItem, EKEventStore, NSString;

@interface WFCalendarItemContentItem : WFGenericFileContentItem

{
    EKEventStore *_eventStore;
}

@property (retain, nonatomic) EKEventStore *eventStore;
@property (nonatomic, readonly) EKCalendarItem *calendarItem;
@property (nonatomic, readonly) NSString *location;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;

- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;

@end
