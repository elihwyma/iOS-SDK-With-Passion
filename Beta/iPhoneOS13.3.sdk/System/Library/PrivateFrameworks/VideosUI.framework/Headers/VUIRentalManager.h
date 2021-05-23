/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface VUIRentalManager : NSObject

{
    _Bool _needToSendPlaybackStartDatesToServer;
    NSMutableSet *_rentalContextsNeedingCheckin;
}

@property (nonatomic) _Bool needToSendPlaybackStartDatesToServer;
@property (retain, nonatomic) NSMutableSet *rentalContextsNeedingCheckin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)_init;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)_activeAccountDidChange:(id)arg1;
- (void)_networkReachbilityDidChange:(id)arg1;
- (void)checkOutRentalWithID:(id)arg1 dsid:(id)arg2 checkoutType:(unsigned long long)arg3 startPlaybackClock:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)checkInRentalWithID:(id)arg1 dsid:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sendPlaybackStartDatesToServerIfNecessary;
- (void)_checkInRentalsNeedingCheckInAtAppLaunch;
- (void)_didFetchInitialDownloads:(id)arg1;
- (void)_checkInRentalsNeedingCheckIn;
- (void)initializeRentals;

@end
