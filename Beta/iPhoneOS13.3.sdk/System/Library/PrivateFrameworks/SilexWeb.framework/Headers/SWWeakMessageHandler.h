/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SWMessageHandler;

@interface SWWeakMessageHandler : NSObject

{
    id <SWMessageHandler> _messageHandler;
}

@property (weak, nonatomic, readonly) id <SWMessageHandler> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)handlerWithMessageHandler:(id)arg1;

- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;

@end
