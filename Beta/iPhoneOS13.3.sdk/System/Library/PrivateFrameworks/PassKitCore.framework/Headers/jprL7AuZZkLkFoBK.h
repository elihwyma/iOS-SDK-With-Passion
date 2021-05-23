/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSData, NSSet, NSString;

@interface jprL7AuZZkLkFoBK : NSObject

{
    NSString *_serverEndpointIdentifier;
    NSData *_hostChallenge;
    NSData *_challengeResponse;
    NSString *_seid;
    NSSet *_identities;
    NSString *_phoneNumber;
    NSString *_emailAddress;
    NSString *_FPANSuffix;
    unsigned long long _eventFrequency;
}

@property (retain, nonatomic) NSString *serverEndpointIdentifier;
@property (retain, nonatomic) NSData *hostChallenge;
@property (retain, nonatomic) NSData *challengeResponse;
@property (retain, nonatomic) NSString *seid;
@property (retain, nonatomic) NSSet *identities;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *FPANSuffix;
@property (nonatomic) unsigned long long eventFrequency;

- (id)initWithServerEndpointIdentifier:(id)arg1;

@end
