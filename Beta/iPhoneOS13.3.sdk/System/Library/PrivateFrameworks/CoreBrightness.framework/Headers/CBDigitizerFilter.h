/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <CoreBrightness/CBFilter.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CBDigitizerFilter : CBFilter

{
    _Bool _firstDigitizerEvent;
    float _digitizerWidth;
    float _digitizerHeight;
    float _deviceCenterX;
    float _deviceCenterY;
    _Bool _touchEnabled;
    float _touchHotSpotRadiusCM;
    float _touchHotSpotSquared;
    NSMutableArray *_hotspots;
    _Bool _obstructed;
    int _orientation;
}

@property (nonatomic, getter=isObstructed) _Bool obstructed;
@property int orientation;

- (void)dealloc;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)handleALSEvent:(id)arg1;
- (id)filterEvent:(id)arg1;
- (id)initWithOrientation:(int)arg1;
- (void)initDigitizerProperties;
- (id)handleDigitizerEvent:(id)arg1;
- (void)setTriggered:(int)arg1 forHotspot:(id)arg2;
- (void)loadTouchProperties:(struct __IOHIDServiceClient *)arg1;
- (id)newHotspotForOrientation:(int)arg1;

@end
