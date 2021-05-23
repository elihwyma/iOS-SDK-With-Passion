/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFAccountAccessResource.h>

@interface WFCloudAppAccessResource : WFAccountAccessResource

+ (void)getAccountWithUsername:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)accountInformationRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
+ (void)requestDidFailWithError:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;

- (id)name;
- (id)accounts;
- (id)icon;
- (Class)accountClass;

@end
