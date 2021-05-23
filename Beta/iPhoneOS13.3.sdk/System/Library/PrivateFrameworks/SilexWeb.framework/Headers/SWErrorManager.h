/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@protocol SWLogger;

@interface SWErrorManager : NSObject

{
    NSError *_error;
    CDUnknownBlockType _block;
    id <SWLogger> _logger;
}

@property (nonatomic, readonly) id <SWLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSError *error;
@property (copy, nonatomic, setter=onError:) CDUnknownBlockType block;

- (void)reportError:(id)arg1;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithMessageHandlerManager:(id)arg1 timeoutManager:(id)arg2 logger:(id)arg3;

@end
