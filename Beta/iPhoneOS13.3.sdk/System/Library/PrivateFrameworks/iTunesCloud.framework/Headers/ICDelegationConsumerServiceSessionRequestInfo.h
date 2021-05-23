/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@interface ICDelegationConsumerServiceSessionRequestInfo : NSObject

{
    unsigned long long _accountID;
    unsigned long long _fairPlaySessionID;
}

@property (nonatomic, readonly) unsigned long long accountID;
@property (nonatomic, readonly) unsigned long long fairPlaySessionID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountID:(unsigned long long)arg1 fairPlaySessionID:(unsigned long long)arg2;

@end
