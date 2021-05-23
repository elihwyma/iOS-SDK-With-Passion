/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@protocol REMSaveRequestTrackedValue;

@interface REMSaveRequestTrackedValueContainer : NSObject

{
    id <REMSaveRequestTrackedValue> _weakValue;
    id <REMSaveRequestTrackedValue> _template;
}

@property (weak, nonatomic) id <REMSaveRequestTrackedValue> weakValue;
@property (retain, nonatomic) id <REMSaveRequestTrackedValue> template;

- (id)initWithValue:(id)arg1;
- (id)valueForSaveRequest:(id)arg1;
- (id)valueWithoutPerformingCopy;

@end
