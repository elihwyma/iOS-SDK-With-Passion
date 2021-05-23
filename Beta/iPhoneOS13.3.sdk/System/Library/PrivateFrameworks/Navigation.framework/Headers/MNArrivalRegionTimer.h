/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOArrivalRegion, NSTimer;

@protocol MNArrivalRegionTimerDelegate;

__attribute__((visibility("hidden")))
@interface MNArrivalRegionTimer : NSObject

{
    GEOArrivalRegion *_arrivalRegion;
    NSTimer *_timer;
    id <MNArrivalRegionTimerDelegate> _delegate;
}

@property (weak, nonatomic) id <MNArrivalRegionTimerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)updateForLocation:(id)arg1;
- (id)initWithArrivalRegion:(id)arg1;

@end
