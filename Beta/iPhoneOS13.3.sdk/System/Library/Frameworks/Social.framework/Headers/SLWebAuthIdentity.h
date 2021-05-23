/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SLWebAuthIdentity : NSObject

{
    NSString *_username;
    NSString *_token;
    NSString *_displayName;
    NSString *_refreshToken;
    NSString *_youTubeUsername;
}

@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSString *token;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *refreshToken;
@property (nonatomic, readonly) NSString *youTubeUsername;

- (id)initWithUsername:(id)arg1 token:(id)arg2 displayName:(id)arg3 refreshToken:(id)arg4 youTubeUsername:(id)arg5;

@end
