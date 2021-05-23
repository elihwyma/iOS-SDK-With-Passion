/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface WKInterfaceDevice : NSObject

{
    _Bool _batteryMonitoringEnabled;
    float _batteryLevel;
    double _screenScale;
    long long _batteryState;
    NSString *_preferredContentSizeCategory;
    long long _layoutDirection;
    long long _wristLocation;
    long long _crownOrientation;
    NSString *_deviceSystemVersion;
    NSString *_deviceName;
    NSString *_deviceModel;
    NSString *_deviceLocalizedModel;
    NSString *_deviceSystemName;
    struct CGRect _screenBounds;
}

@property (nonatomic) struct CGRect screenBounds;
@property (nonatomic) double screenScale;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (copy, nonatomic) NSString *deviceSystemVersion;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *deviceLocalizedModel;
@property (copy, nonatomic) NSString *deviceSystemName;
@property (nonatomic, readonly) NSDictionary *cachedImages;
@property (nonatomic, getter=isBatteryMonitoringEnabled) _Bool batteryMonitoringEnabled;
@property (nonatomic, readonly) float batteryLevel;
@property (nonatomic, readonly) long long batteryState;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly) long long wristLocation;
@property (nonatomic, readonly) long long crownOrientation;
@property (copy, nonatomic, readonly) NSString *systemVersion;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *model;
@property (copy, nonatomic, readonly) NSString *localizedModel;
@property (copy, nonatomic, readonly) NSString *systemName;

+ (id)currentDevice;

- (_Bool)addCachedImage:(id)arg1 name:(id)arg2;
- (_Bool)addCachedImageWithData:(id)arg1 name:(id)arg2;
- (void)removeCachedImageWithName:(id)arg1;
- (void)removeAllCachedImages;
- (void)playHaptic:(long long)arg1;

@end
