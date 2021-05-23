/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKReminderStore;

__attribute__((visibility("hidden")))
@interface EKReminderFetchRequestToken : NSObject

{
    EKReminderStore *_reminderStore;
}

@property (weak, nonatomic, readonly) EKReminderStore *reminderStore;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (id)initWithReminderStore:(id)arg1;

@end
