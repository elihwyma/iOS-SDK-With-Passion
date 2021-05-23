/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <PlatterKit/Swift-Protocol.h>

@class NSArray, NSDate, NSString, NSTimeZone, UIButton;

@protocol PLTitled <Swift>

@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) _Bool dateAllDay;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long dateFormatStyle;
@property (nonatomic, readonly) NSArray *iconButtons;
@property (nonatomic, readonly) UIButton *utilityButton;

@end
