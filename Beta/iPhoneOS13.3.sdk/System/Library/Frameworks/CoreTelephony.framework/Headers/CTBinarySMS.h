/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class CTXPCServiceSubscriptionContext, NSData, NSString;

@interface CTBinarySMS : NSObject

{
    int _portAddressingScheme;
    int _srcPort;
    int _dstPort;
    NSData *_payload;
    NSString *_destinationAddress;
    NSString *_smscAddress;
    CTXPCServiceSubscriptionContext *_context;
}

@property (nonatomic) int portAddressingScheme;
@property (nonatomic) int srcPort;
@property (nonatomic) int dstPort;
@property (copy, nonatomic) NSData *payload;
@property (copy, nonatomic) NSString *destinationAddress;
@property (copy, nonatomic) NSString *smscAddress;
@property (copy, nonatomic) CTXPCServiceSubscriptionContext *context;

- (id)init;
- (void)dealloc;
- (_Bool)isValid;

@end
