/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

#import <ClassroomKit/Swift-Protocol.h>

@class NSString;

@interface CRKRemoteEndpoint : NSObject <Swift>

{
    unsigned short _port;
    NSString *_IPAddress;
}

@property (copy, nonatomic, readonly) NSString *IPAddress;
@property (nonatomic, readonly) unsigned short port;
@property (copy, nonatomic, readonly) NSString *stringValue;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2;
- (_Bool)isOnSameHostAsRemoteEndpoint:(id)arg1;
- (_Bool)isOnSameHostButDifferentPortAsRemoteEndpoint:(id)arg1;
- (_Bool)isEqualToRemoteEndpoint:(id)arg1;

@end
