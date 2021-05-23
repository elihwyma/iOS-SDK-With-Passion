/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@interface IDSSockAddrWrapper : NSObject <Swift>

{
    struct sockaddr_storage _sa;
}

@property (nonatomic, readonly) const struct sockaddr *sa;
@property (nonatomic, readonly) const struct sockaddr_in *sa4;
@property (nonatomic, readonly) const struct sockaddr_in6 *sa6;
@property (nonatomic, readonly) unsigned short saPortHostOrder;

+ (id)wrapperWithSockAddr:(const struct sockaddr *)arg1;
+ (id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2 withInterfaceName:(id)arg3;
+ (id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2;
+ (id)wrapperWithWrapper:(id)arg1 andPortHostOrder:(unsigned short)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSockAddr:(const struct sockaddr *)arg1;
- (_Bool)isEqualToWrapper:(id)arg1;
- (_Bool)isEqualToSockAddr:(const struct sockaddr *)arg1;
- (id)ipData;
- (id)ipString;
- (void)copySockAddr:(struct sockaddr *)arg1;
- (void)updateLocalPort:(unsigned short)arg1;

@end
