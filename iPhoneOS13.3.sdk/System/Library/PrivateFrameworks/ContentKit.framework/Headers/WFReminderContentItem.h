//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFCalendarItemContentItem.h>

@class EKReminder;

@interface WFReminderContentItem : WFCalendarItemContentItem
{
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)ownedTypes;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
+ (BOOL)hasLibrary;
+ (id)propertyBuilders;
+ (id)itemWithEKReminder:(id)arg1 fromEventStore:(id)arg2;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (void)generateObjectRepresentations:(id /* CDUnknownBlockType */)arg1 options:(id)arg2 forClass:(Class)arg3;
@property(readonly, nonatomic) EKReminder *reminder;
- (BOOL)getListAltText:(id /* CDUnknownBlockType */)arg1;

@end

