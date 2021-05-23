/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString, NSUUID;

@interface CUBluetoothDevice : NSObject

{
    _Bool _magicPaired;
    _Bool _supportsAACPService;
    _Bool _present;
    unsigned int _connectedServices;
    int _colorCode;
    unsigned int _deviceFlags;
    int _primaryPlacement;
    int _secondaryPlacement;
    unsigned int _productIdentifier;
    CDStruct_83abfce7 _address;
    NSString *_addressString;
    NSUUID *_identifier;
    NSString *_manufacturer;
    NSString *_modelNumber;
    NSString *_name;
}

@property (nonatomic) CDStruct_83abfce7 address;
@property (copy, nonatomic) NSString *addressString;
@property (nonatomic) int colorCode;
@property (nonatomic) unsigned int connectedServices;
@property (nonatomic) unsigned int deviceFlags;
@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) _Bool magicPaired;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *modelNumber;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int primaryPlacement;
@property (nonatomic) int secondaryPlacement;
@property (nonatomic) _Bool present;
@property (nonatomic) unsigned int productIdentifier;
@property (nonatomic) _Bool supportsAACPService;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
