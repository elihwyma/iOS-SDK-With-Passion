/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTTimer.h>

@class MTSound, NSDate, NSDictionary, NSString;

@interface MTMutableTimer : MTTimer

@property (copy, nonatomic) NSDate *firedDate;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSDate *dismissedDate;
@property (copy, nonatomic) NSDictionary *siriContext;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) MTSound *sound;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
