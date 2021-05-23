/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSDate, NSString, UIColor;

@interface NTKReminderTimelineEntry : NTKTimelineEntryModel

{
    _Bool _displayAsConflicting;
    NSDate *_dueDate;
    NSString *_primaryReminderTitle;
    NSString *_primaryReminderId;
    NSString *_secondaryReminderTitle;
    unsigned long long _overlappingReminderCount;
    UIColor *_primaryReminderParentListColor;
}

@property (retain, nonatomic) NSDate *dueDate;
@property (retain, nonatomic) NSString *primaryReminderTitle;
@property (retain, nonatomic) NSString *primaryReminderId;
@property (retain, nonatomic) NSString *secondaryReminderTitle;
@property (nonatomic) _Bool displayAsConflicting;
@property (nonatomic) unsigned long long overlappingReminderCount;
@property (retain, nonatomic) UIColor *primaryReminderParentListColor;

+ (id)_reminderImageCorner;
+ (id)_cornerReminderImageProvider;
+ (id)_reminderImageAnalog;
+ (id)_analogReminderImageProvider;
+ (id)lockedEntryForFamily:(long long)arg1;
+ (id)loadingEntryForFamily:(long long)arg1;

- (id)description;
- (id)templateForComplicationFamily:(long long)arg1;
- (id)_createLargeUtilityTemplate;
- (id)_createLargeModularTemplate;
- (id)_createSignatureCornerTemplate;

@end
