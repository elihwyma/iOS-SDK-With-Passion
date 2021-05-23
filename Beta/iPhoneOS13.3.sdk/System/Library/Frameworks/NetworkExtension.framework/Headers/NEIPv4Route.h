/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NEIPv4Route : NSObject

{
    NSString *_destinationAddress;
    NSString *_destinationSubnetMask;
    NSString *_gatewayAddress;
}

@property (readonly) NSString *destinationAddress;
@property (readonly) NSString *destinationSubnetMask;
@property (copy) NSString *gatewayAddress;

+ (_Bool)supportsSecureCoding;
+ (void)initGlobals;
+ (id)defaultRoute;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isDefaultRoute;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithDestinationAddress:(id)arg1 subnetMask:(id)arg2;

@end
