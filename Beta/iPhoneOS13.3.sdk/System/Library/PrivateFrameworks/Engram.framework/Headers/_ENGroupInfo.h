/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSObject.h>

#import <Engram/Swift-Protocol.h>

@class ENAccountIdentity, NSArray, NSData;

@interface _ENGroupInfo : NSObject <Swift>

{
    ENAccountIdentity *_accountIdentity;
    NSArray *_participants;
    NSData *_sharedApplicationData;
}

@property (retain) ENAccountIdentity *accountIdentity;
@property (retain, nonatomic) NSArray *participants;
@property (retain, nonatomic) NSData *sharedApplicationData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountIdentity:(id)arg1 paricipants:(id)arg2 sharedApplicationData:(id)arg3;

@end
