/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@class SOAuthorizationCore;

@protocol SOAuthorizationCoreDelegate;

__attribute__((visibility("hidden")))
@interface SOAuthorizationPoolItem : NSObject

{
    SOAuthorizationCore *_authorization;
    id <SOAuthorizationCoreDelegate> _delegate;
}

@property (nonatomic, readonly) SOAuthorizationCore *authorization;
@property (nonatomic, readonly) id <SOAuthorizationCoreDelegate> delegate;

- (id)initWithAuthorization:(id)arg1 delegate:(id)arg2;

@end
