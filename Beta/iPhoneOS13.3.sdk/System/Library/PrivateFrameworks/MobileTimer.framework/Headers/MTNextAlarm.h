/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL;

@interface MTNextAlarm : NSObject

{
    _Bool _isSleepAlarm;
    NSString *_title;
    NSDate *_fireDate;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) _Bool isSleepAlarm;
@property (copy, nonatomic, readonly) NSURL *clockAppSectionURL;

- (id)description;

@end
