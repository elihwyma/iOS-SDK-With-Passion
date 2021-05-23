/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol SWLogger;

@interface SWMessageHandlerManager : NSObject

{
    id <SWLogger> _logger;
    NSMutableDictionary *_messageHandlers;
}

@property (nonatomic, readonly) id <SWLogger> logger;
@property (nonatomic, readonly) NSMutableDictionary *messageHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)addMessageHandler:(id)arg1 name:(id)arg2;
- (id)initWithUserContentController:(id)arg1 logger:(id)arg2;

@end
