/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface NEIKEv2EAPProtocol : NSObject

{
    unsigned long long _method;
    NSDictionary *_properties;
}

@property (readonly) unsigned int type;
@property (readonly) _Bool isUserNamePassword;
@property (readonly) _Bool isCertificate;
@property unsigned long long method;
@property (retain) NSDictionary *properties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMethod:(unsigned long long)arg1;

@end
