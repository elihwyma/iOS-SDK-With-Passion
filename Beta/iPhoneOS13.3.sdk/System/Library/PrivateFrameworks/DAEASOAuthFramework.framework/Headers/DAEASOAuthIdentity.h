/*
 Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DAEASOAuthIdentity : NSObject

{
    NSString *_username;
    NSString *_displayName;
    NSString *_token;
    NSString *_refreshToken;
    NSString *_tokenRequestURI;
}

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *refreshToken;
@property (copy, nonatomic) NSString *tokenRequestURI;

@end
