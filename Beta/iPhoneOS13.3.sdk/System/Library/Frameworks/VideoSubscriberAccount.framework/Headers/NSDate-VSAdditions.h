/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSDate.h>

@interface NSDate (VSAdditions)

+ (id)vs_currentDate;
+ (id)vs_dateAccessQueue;
+ (id)vs_recordedDates;
+ (void)vs_startRecordingDates;
+ (id)vs_stopRecordingDates;

@end
