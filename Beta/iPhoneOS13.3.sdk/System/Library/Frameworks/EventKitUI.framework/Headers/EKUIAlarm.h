/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKAlarm;

@interface EKUIAlarm : NSObject

{
    _Bool _isLeaveNowAlarm;
    EKAlarm *_alarm;
}

@property (nonatomic, readonly) _Bool isLeaveNowAlarm;
@property (nonatomic, readonly) EKAlarm *alarm;

- (id)description;
- (id)localizedDescriptionAllDay:(_Bool)arg1;
- (id)initWithAlarm:(id)arg1;
- (id)initLeaveNowAlarm;
- (_Bool)isEqualToUIAlarm:(id)arg1;

@end
