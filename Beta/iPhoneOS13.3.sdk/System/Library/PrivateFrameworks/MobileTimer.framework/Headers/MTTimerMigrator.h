/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTTimer;

@interface MTTimerMigrator : NSObject

{
    MTTimer *_timer;
}

@property (retain, nonatomic) MTTimer *timer;

- (void)migrateFromOldStorage;
- (void)removeFromOldStorage;

@end
