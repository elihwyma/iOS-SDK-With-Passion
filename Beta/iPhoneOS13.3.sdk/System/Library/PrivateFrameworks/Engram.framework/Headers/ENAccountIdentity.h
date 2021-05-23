/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSObject.h>

#import <Engram/Swift-Protocol.h>

@protocol ENAccountKey, ENDeviceKey;

@interface ENAccountIdentity : NSObject <Swift>

{
    id <ENAccountKey> _accountKey;
    id <ENDeviceKey> _deviceKey;
}

@property (retain, nonatomic) id <ENAccountKey> accountKey;
@property (retain, nonatomic) id <ENDeviceKey> deviceKey;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountKey:(id)arg1 deviceKey:(id)arg2;

@end
