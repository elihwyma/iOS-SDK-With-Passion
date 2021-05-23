/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (MTUtilities)

@property (nonatomic, readonly) int mtClockAppSection;
@property (nonatomic, readonly) _Bool mtIsList;
@property (nonatomic, readonly) _Bool mtIsForLastTimer;
@property (nonatomic, readonly) NSString *mtID;

+ (id)mtURLForClockAppSection:(int)arg1 timerManager:(id)arg2;
+ (id)mtURLForScheme:(id)arg1;
+ (id)mtURLForClockAppSection:(int)arg1;

@end
