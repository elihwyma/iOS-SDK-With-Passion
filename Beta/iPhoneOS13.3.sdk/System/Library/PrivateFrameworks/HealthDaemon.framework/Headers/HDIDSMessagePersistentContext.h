/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface HDIDSMessagePersistentContext : NSObject <Swift>

{
    _Bool _fromRequest;
    unsigned short _messageID;
    NSString *_idsIdentifier;
    NSString *_deviceIdentifier;
    NSDictionary *_userInfo;
    NSDate *_date;
}

@property (nonatomic) unsigned short messageID;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isFromRequest) _Bool fromRequest;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
