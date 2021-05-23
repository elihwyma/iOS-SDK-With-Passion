/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFLocationManagerDispatcher, NAFuture, NSString, NSUserDefaults;

@protocol HFLocationSensingCoordinatorDelegate;

@interface HFLocationSensingCoordinator : NSObject

{
    int _defaultsChangedNotifyToken;
    id <HFLocationSensingCoordinatorDelegate> _delegate;
    NSUserDefaults *_defaults;
    HFLocationManagerDispatcher *_locationDispatcher;
}

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) HFLocationManagerDispatcher *locationDispatcher;
@property (nonatomic) int defaultsChangedNotifyToken;
@property (weak, nonatomic) id <HFLocationSensingCoordinatorDelegate> delegate;
@property (nonatomic, readonly) NAFuture *locationSensingAvailableFuture;
@property (nonatomic) _Bool homeSensingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)_defaultsDidChange;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;

@end
