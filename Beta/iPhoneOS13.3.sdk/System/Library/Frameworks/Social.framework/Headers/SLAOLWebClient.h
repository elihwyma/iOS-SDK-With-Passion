/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SLAOLWebClient : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *clientID;
@property (nonatomic, readonly) NSString *clientRedirect;
@property (nonatomic, readonly) NSString *tokenURL;
@property (nonatomic, readonly) NSString *authRequestURL;
@property (nonatomic, readonly) NSString *userInfoURL;
@property (nonatomic, readonly) NSString *fallbackUserInfoURL;
@property (nonatomic, readonly) Class webAuthRequestClass;
@property (nonatomic, readonly) Class tokenRequestClass;
@property (nonatomic, readonly) Class tokenResponseClass;
@property (nonatomic, readonly) Class webUserInfoResponseClass;
@property (nonatomic, readonly) Class fallbackWebUserInfoResponseClass;
@property (nonatomic, readonly) NSString *clientSecret;
@property (nonatomic, readonly) NSString *clientRedirectForAppOpenURL;
@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) NSArray *defaultScope;
@property (nonatomic, readonly) NSArray *youTubeScope;

+ (_Bool)supportsSecureCoding;
+ (id)clientRedirect;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
