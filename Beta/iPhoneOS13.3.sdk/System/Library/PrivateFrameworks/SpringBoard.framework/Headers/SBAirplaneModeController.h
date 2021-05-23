/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class RadiosPreferences;

@protocol SBAirplaneModeDelegate;

@interface SBAirplaneModeController : NSObject

{
    RadiosPreferences *_radioPrefs;
    _Bool _cachedInAirplaneMode;
    id <SBAirplaneModeDelegate> _delegate;
}

@property (nonatomic, getter=isInAirplaneMode) _Bool inAirplaneMode;
@property (weak, nonatomic) id <SBAirplaneModeDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void)airplaneModeChanged;

@end
