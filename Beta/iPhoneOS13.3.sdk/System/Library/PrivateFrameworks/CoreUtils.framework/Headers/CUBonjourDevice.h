/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSData, NSDictionary, NSString, NSUUID;

@interface CUBonjourDevice : NSObject

{
    unsigned char _deviceIDBytes[6];
    NSUUID *_identifier;
    NSString *_model;
    NSString *_name;
    NSString *_serviceType;
    NSDictionary *_txtDictionary;
    NSData *_txtData;
    NSDictionary *_deviceInfo;
    NSString *_identifierStr;
    NSUUID *_identifierUUID;
}

@property (copy, nonatomic) NSDictionary *deviceInfo;
@property (copy, nonatomic) NSString *identifierStr;
@property (copy, nonatomic) NSUUID *identifierUUID;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic, readonly) NSDictionary *txtDictionary;
@property (copy, nonatomic) NSData *txtData;

- (id)description;
- (id)shortDescription;
- (id)descriptionWithLevel:(int)arg1;
- (unsigned int)updateWithBonjourDeviceInfo:(id)arg1;
- (id)copyConnectionInfoWithFlags:(unsigned long long)arg1 interfaceName:(id)arg2 error:(id *)arg3;
- (id)copyConnectionStringWithFlags:(unsigned long long)arg1 error:(id *)arg2;
- (void)reconfirm;
- (void)_updateTXTDictionary:(id)arg1;

@end
