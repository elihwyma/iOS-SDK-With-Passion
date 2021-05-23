/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

@interface NEDNSProxySettings : NSObject

{
    long long _type;
    NSArray *_servers;
    NSString *_domain;
    NSData *_publicKey;
}

@property (readonly) long long type;
@property (readonly) NSArray *servers;
@property (retain) NSString *domain;
@property (retain) NSData *publicKey;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithType:(long long)arg1 servers:(id)arg2;

@end
