/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@interface NFHardwareControllerInfo : NSObject

{
    _Bool _hasAntenna;
    _Bool _hasBooster;
    _Bool _hasIcfResistor;
    _Bool _hasMFW;
    _Bool _hasExpressFelicaTransitMode;
    _Bool _hasExpressECPAccessMode;
    _Bool _hasExpressGenericAMode;
    _Bool _hasLPCDSupport;
    _Bool _hasHLMSupport;
    _Bool _hasLPEMSupport;
    unsigned long long _siliconVersion;
    unsigned long long _siliconName;
    unsigned long long _ROMVersion;
    unsigned long long _firmwareVersion;
    unsigned long long _firmwareRevision;
    unsigned long long _middlewareVersion;
}

@property (nonatomic, readonly) unsigned long long siliconVersion;
@property (nonatomic, readonly) unsigned long long siliconName;
@property (nonatomic, readonly) unsigned long long ROMVersion;
@property (nonatomic, readonly) unsigned long long firmwareVersion;
@property (nonatomic, readonly) unsigned long long firmwareRevision;
@property (nonatomic, readonly) unsigned long long middlewareVersion;
@property (nonatomic, readonly) _Bool hasAntenna;
@property (nonatomic, readonly) _Bool hasBooster;
@property (nonatomic, readonly) _Bool hasIcfResistor;
@property (nonatomic, readonly) _Bool hasMFW;
@property (nonatomic, readonly) _Bool hasExpressFelicaTransitMode;
@property (nonatomic, readonly) _Bool hasExpressECPAccessMode;
@property (nonatomic, readonly) _Bool hasExpressGenericAMode;
@property (nonatomic, readonly) _Bool hasLPCDSupport;
@property (nonatomic, readonly) _Bool hasHLMSupport;
@property (nonatomic, readonly) _Bool hasLPEMSupport;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)asDictionary;

@end
