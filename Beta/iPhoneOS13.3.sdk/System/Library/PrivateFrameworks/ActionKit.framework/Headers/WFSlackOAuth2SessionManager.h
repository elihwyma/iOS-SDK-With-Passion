/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFOAuth2SessionManager.h>

@class NSString;

@interface WFSlackOAuth2SessionManager : WFOAuth2SessionManager

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithClientID:(id)arg1 clientSecret:(id)arg2;
- (id)initWithSessionConfiguration:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3;

@end
