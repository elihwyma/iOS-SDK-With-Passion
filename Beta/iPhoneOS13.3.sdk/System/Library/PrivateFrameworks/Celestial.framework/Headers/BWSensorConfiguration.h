/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface BWSensorConfiguration : NSObject

{
    NSString *_portType;
    NSString *_sensorIDString;
    NSDictionary *_sensorIDDictionary;
    NSDictionary *_cameraInfo;
}

@property (nonatomic, readonly) NSString *portType;
@property (nonatomic, readonly) NSString *sensorIDString;
@property (nonatomic, readonly) NSDictionary *sensorIDDictionary;
@property (nonatomic, readonly) NSDictionary *cameraInfo;

- (void)dealloc;
- (id)description;
- (id)initWithPortType:(id)arg1 sensorIDString:(id)arg2 sensorIDDictionary:(id)arg3 cameraInfo:(id)arg4;

@end
