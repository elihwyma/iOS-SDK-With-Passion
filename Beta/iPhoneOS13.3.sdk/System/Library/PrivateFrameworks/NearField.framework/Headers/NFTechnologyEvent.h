/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@interface NFTechnologyEvent : NSObject

{
    unsigned char _valueAddedServiceMode;
    _Bool _vasSupported;
    _Bool _touchIDRequired;
    unsigned short _systemCode;
    unsigned int _technology;
    unsigned int _terminalType;
}

@property (nonatomic, readonly) unsigned int technology;
@property (nonatomic, readonly) unsigned char valueAddedServiceMode;
@property (nonatomic, readonly) unsigned short systemCode;
@property (nonatomic, readonly) _Bool vasSupported;
@property (nonatomic, readonly) _Bool touchIDRequired;
@property (nonatomic, readonly) unsigned int terminalType;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTechnology:(unsigned int)arg1 andValueAddedServiceMode:(unsigned int)arg2 andSystemCode:(unsigned short)arg3;
- (id)initWithTechnology:(unsigned int)arg1 andValueAddedServiceMode:(unsigned int)arg2;
- (id)initWithFieldNotification:(id)arg1;

@end
