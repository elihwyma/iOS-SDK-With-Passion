/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <Foundation/NSObject.h>

@interface HLPCommonDefines : NSObject

+ (id)userName;
+ (id)clientID;
+ (void)setAuthenticationContext:(id)arg1;
+ (id)contentRequestHeaderFields;
+ (id)assetRequestHeaderFields;
+ (_Bool)hasServiceTicket;
+ (id)contentServiceTicket;
+ (id)assetServiceTicket;

@end
