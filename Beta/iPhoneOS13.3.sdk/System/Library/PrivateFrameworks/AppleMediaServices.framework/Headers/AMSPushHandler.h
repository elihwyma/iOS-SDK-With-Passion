/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSPushConfiguration;

@protocol AMSBagProtocol, AMSPushHandlerContract;

@interface AMSPushHandler : NSObject

{
    id <AMSBagProtocol> _bag;
    AMSPushConfiguration *_configuration;
    id <AMSPushHandlerContract> _bagContract;
}

@property (nonatomic, readonly) id <AMSBagProtocol> bag;
@property (nonatomic, readonly) AMSPushConfiguration *configuration;
@property (nonatomic, readonly) id <AMSPushHandlerContract> bagContract;

- (id)_enabledParsables;
- (id)initWithConfiguration:(id)arg1 bag:(id)arg2;
- (void)handleNotification:(id)arg1;
- (_Bool)shouldHandleNotification:(id)arg1;
- (id)initWithConfiguration:(id)arg1 bagContract:(id)arg2;

@end
