/*
 Image: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ACCiAP2ShimAccessory : NSObject

{
    _Bool _dontPublish;
    unsigned int _connectionID;
    unsigned int _featureTypeMask;
    NSString *_keyTag;
    NSString *_keyAccessoryUID;
    NSString *_keyConnectionID;
    NSString *_accessoryUID;
    NSString *_name;
    NSString *_model;
    NSString *_manufacturer;
    NSString *_serialNumber;
    NSString *_firmwareVersion;
    NSString *_hardwareVersion;
    id _context;
}

@property (readonly) NSString *keyTag;
@property (readonly) NSString *keyAccessoryUID;
@property (readonly) NSString *keyConnectionID;
@property unsigned int connectionID;
@property (readonly) unsigned int featureTypeMask;
@property (readonly) NSString *accessoryUID;
@property (retain) NSString *name;
@property (retain) NSString *model;
@property (retain) NSString *manufacturer;
@property (retain) NSString *serialNumber;
@property (retain) NSString *firmwareVersion;
@property (retain) NSString *hardwareVersion;
@property (retain) id context;
@property _Bool dontPublish;

- (id)description;
- (void)addFeature:(int)arg1;
- (id)initWithUID:(id)arg1 keyTag:(id)arg2 features:(unsigned int)arg3;
- (id)accessoryInfoDict;
- (id)connectionIDObj;
- (void)removeFeature:(int)arg1;

@end
