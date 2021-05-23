/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class NSNumberFormatter, NSString;

@interface _CLKTimeFormatData : NSObject

{
    NSString *_formatHourMinSecSubsec;
    NSString *_formatHourMinSec;
    NSString *_formatHourMin;
    NSString *_formatMinSecSubsec;
    NSString *_formatMinSec;
    NSString *_formatMin;
    NSNumberFormatter *_singleWidthNumberFormatter;
    NSNumberFormatter *_doubleWidthNumberFormatter;
}

@property (nonatomic, readonly) NSString *formatHourMinSecSubsec;
@property (nonatomic, readonly) NSString *formatHourMinSec;
@property (nonatomic, readonly) NSString *formatHourMin;
@property (nonatomic, readonly) NSString *formatMinSecSubsec;
@property (nonatomic, readonly) NSString *formatMinSec;
@property (nonatomic, readonly) NSString *formatMin;
@property (nonatomic, readonly) NSNumberFormatter *singleWidthNumberFormatter;
@property (nonatomic, readonly) NSNumberFormatter *doubleWidthNumberFormatter;

+ (id)instanceForCurrentLocale;
+ (void)resetTimeFormatData;
+ (id)_timeFormatDataAccessLock;
+ (id)_timeLocale;

- (id)init;

@end
