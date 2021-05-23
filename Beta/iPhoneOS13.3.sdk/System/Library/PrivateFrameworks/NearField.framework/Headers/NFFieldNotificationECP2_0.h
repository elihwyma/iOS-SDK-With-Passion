/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFFieldNotification.h>

@class NSArray, NSData;

@interface NFFieldNotificationECP2_0 : NFFieldNotification

{
    _Bool _odaRequired;
    unsigned char _terminalSubType;
    unsigned long long _terminalType;
    NSArray *_tciArray;
    NSData *_openLoopSchemeBitfield;
}

@property (readonly) _Bool odaRequired;
@property (readonly) unsigned long long terminalType;
@property (readonly) unsigned char terminalSubType;
@property (retain, readonly) NSArray *tciArray;
@property (retain, readonly) NSData *openLoopSchemeBitfield;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
