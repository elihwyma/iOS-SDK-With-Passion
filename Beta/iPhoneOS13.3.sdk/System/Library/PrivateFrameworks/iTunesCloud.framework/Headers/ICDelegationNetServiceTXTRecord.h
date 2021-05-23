/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@interface ICDelegationNetServiceTXTRecord : NSObject <Swift>

{
    NSArray *_delegationAccountUUIDs;
    NSString *_deviceName;
    long long _securityMode;
    long long _serviceVersion;
}

@property (copy, nonatomic) NSArray *delegationAccountUUIDs;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) long long securityMode;
@property (nonatomic) long long serviceVersion;
@property (copy, nonatomic, readonly) NSData *TXTRecordData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTXTRecordData:(id)arg1;

@end
