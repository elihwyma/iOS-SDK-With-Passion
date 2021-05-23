/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSData, NSNumber;

@interface CTSMSDataType : NSObject

{
    _Bool _parseSMSC;
    _Bool _waitForAck;
    NSNumber *_transport;
    NSNumber *_ctFormat;
    NSData *_hexPdu;
}

@property (nonatomic) NSNumber *transport;
@property (nonatomic) NSNumber *ctFormat;
@property (nonatomic) _Bool parseSMSC;
@property (nonatomic) _Bool waitForAck;
@property (retain, nonatomic) NSData *hexPdu;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToCTSMSDataType:(id)arg1;

@end
