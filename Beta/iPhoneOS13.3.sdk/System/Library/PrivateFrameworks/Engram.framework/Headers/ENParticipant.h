/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSObject.h>

#import <Engram/Swift-Protocol.h>

@class NSArray, NSSet;

@protocol ENAccountPublicKey;

@interface ENParticipant : NSObject <Swift>

{
    id <ENAccountPublicKey> _accountPublicKey;
    NSSet *_aliases;
    NSArray *_devices;
}

@property (retain, nonatomic) id <ENAccountPublicKey> accountPublicKey;
@property (retain, nonatomic) NSSet *aliases;
@property (retain, nonatomic) NSArray *devices;
@property (nonatomic, readonly) _Bool supportsEngram;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)deviceWithIdentifier:(id)arg1;
- (id)initWithAccountPublicKey:(id)arg1 aliases:(id)arg2 devices:(id)arg3;

@end
