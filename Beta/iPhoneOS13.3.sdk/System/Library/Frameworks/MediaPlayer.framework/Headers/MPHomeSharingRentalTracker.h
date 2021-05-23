/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface MPHomeSharingRentalTracker : NSObject

{
    NSObject<OS_dispatch_queue> *_rentalTrackerQueue;
    NSMutableDictionary *_rentals;
}

+ (id)sharedInstance;

- (id)_init;
- (void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2;
- (void)removeRentalWithItemID:(unsigned long long)arg1;
- (void)removeAllRentalsForDatabaseID:(id)arg1;
- (void)_saveRentals;

@end
