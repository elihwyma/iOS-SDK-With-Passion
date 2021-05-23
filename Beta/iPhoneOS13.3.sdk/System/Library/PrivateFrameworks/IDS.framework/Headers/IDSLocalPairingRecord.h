/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSDictionary;

@interface IDSLocalPairingRecord : NSObject

{
    NSDictionary *_protectionClassIdentityDataMap;
}

@property (retain, nonatomic) NSDictionary *protectionClassIdentityDataMap;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identityDataForDataProtectionClass:(unsigned int)arg1 error:(id *)arg2;
- (id)initWithIdentityDataClassA:(id)arg1 classC:(id)arg2 classD:(id)arg3;

@end
