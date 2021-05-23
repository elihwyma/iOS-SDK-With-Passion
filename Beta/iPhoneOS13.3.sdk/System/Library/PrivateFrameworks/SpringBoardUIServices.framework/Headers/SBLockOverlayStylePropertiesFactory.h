/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SBLockOverlayStylePropertiesFactory : NSObject

{
    NSMutableDictionary *_deviceQualityToProperties;
    unsigned long long _style;
}

@property (nonatomic, readonly) unsigned long long style;

+ (id)overlayPropertiesFactoryWithStyle:(unsigned long long)arg1;

- (id)initWithStyle:(unsigned long long)arg1;
- (id)propertiesWithGraphicsQuality:(long long)arg1;
- (id)_fetchAndCachePropsForDeviceQuality:(long long)arg1;
- (id)propertiesWithDeviceDefaultGraphicsQuality;

@end
