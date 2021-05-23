/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSResponse.h>

@class NSData;

@interface HSGetAuthorizedAccountsTokenResponse : HSResponse

{
    NSData *tokenData;
}

@property (copy, nonatomic) NSData *tokenData;

@end
