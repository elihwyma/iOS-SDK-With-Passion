/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFCalendarItemContentItem.h>

@class EKReminder;

@interface WFReminderContentItem : WFCalendarItemContentItem

@property (nonatomic, readonly) EKReminder *reminder;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (_Bool)hasLibrary;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)itemWithEKReminder:(id)arg1 fromEventStore:(id)arg2;

- (_Bool)getListAltText:(CDUnknownBlockType)arg1;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (_Bool)canGenerateRepresentationForType:(id)arg1;

@end
