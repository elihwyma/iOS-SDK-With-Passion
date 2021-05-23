/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SWLogger, SWScriptsManager;

@interface SWPresentationManager : NSObject

{
    unsigned long long _presentationState;
    double _height;
    CDUnknownBlockType loadBlock;
    CDUnknownBlockType presentableBlock;
    id <SWScriptsManager> _scriptsManager;
    id <SWLogger> _logger;
}

@property (nonatomic, readonly) id <SWScriptsManager> scriptsManager;
@property (nonatomic, readonly) id <SWLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long presentationState;
@property (nonatomic, readonly) double height;
@property (copy, nonatomic, setter=onLoad:) CDUnknownBlockType loadBlock;
@property (copy, nonatomic, setter=onPresentable:) CDUnknownBlockType presentableBlock;

- (void)refresh;
- (id)descriptionForPresentationState:(unsigned long long)arg1;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithWebContentScriptsManager:(id)arg1 messageHandlerManager:(id)arg2 documentStateProvider:(id)arg3 logger:(id)arg4;

@end
