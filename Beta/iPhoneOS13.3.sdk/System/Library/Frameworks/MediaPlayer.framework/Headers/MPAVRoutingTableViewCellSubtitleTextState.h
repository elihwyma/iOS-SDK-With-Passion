/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPAVRoutingTableViewCellSubtitleTextState : NSObject

{
    _Bool _animating;
    NSString *_routeUID;
    NSString *_batteryText;
    NSString *_pairedDeviceText;
    NSString *_localizedSubtitle;
    unsigned long long _currentVisibleTextType;
}

@property (nonatomic) unsigned long long currentVisibleTextType;
@property (nonatomic, readonly) _Bool hasVisibleTextTypeToShow;
@property (nonatomic, readonly) _Bool hasVisibleTextTypeToTransitionTo;
@property (copy, nonatomic, readonly) NSString *stringForCurrentVisibleTextType;
@property (copy, nonatomic) NSString *routeUID;
@property (copy, nonatomic) NSString *batteryText;
@property (copy, nonatomic) NSString *pairedDeviceText;
@property (copy, nonatomic) NSString *localizedSubtitle;
@property (nonatomic, getter=isAnimating) _Bool animating;

- (void)transitionToNextAvailableVisibleTextType;
- (id)_stringForVisibleTextType:(unsigned long long)arg1;
- (unsigned long long)_nextAvailableVisibleTextType;
- (void)resetForNewRoute;

@end
