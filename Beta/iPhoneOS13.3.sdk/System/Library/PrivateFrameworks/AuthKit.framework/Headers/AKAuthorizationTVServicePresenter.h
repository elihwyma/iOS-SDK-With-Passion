/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@interface AKAuthorizationTVServicePresenter : NSObject

- (long long)_typeFromString:(id)arg1;
- (id)_stringForType:(long long)arg1;
- (id)_filterDeprecatedType:(id)arg1;
- (long long)typeOfMessage:(id)arg1;
- (id)buildDidTapNotificationMessage;
- (id)buildDidStartServerAuthorizationMessage;
- (id)buildFetchAppIconMessage;
- (id)buildFetchAppIconReplyWithImageData:(id)arg1 imageScale:(id)arg2;

@end
