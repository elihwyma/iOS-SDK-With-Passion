/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, PUAirPlayScreenMap;

@protocol PUAirPlayScreenReceiver;

__attribute__((visibility("hidden")))
@interface PUAirPlayScreenDetector : NSObject

{
    id <PUAirPlayScreenReceiver> _receiver;
    PUAirPlayScreenMap *__detectedScreensMap;
}

@property (retain, nonatomic, setter=_setDetectedScreensMap:) PUAirPlayScreenMap *_detectedScreensMap;
@property (weak, nonatomic) id <PUAirPlayScreenReceiver> receiver;
@property (nonatomic, readonly) NSArray *availableScreens;

- (id)init;
- (_Bool)shouldIgnoreScreen:(id)arg1;
- (void)_scanForAvailableScreensIfNeeded;
- (void)_setUpScreenNotifications;
- (void)_detectedNewScreen:(id)arg1;
- (void)_lostScreen:(id)arg1;

@end
