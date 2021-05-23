/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputContextManager, AVWeakReference, NSString;

@interface AVFigEndpointUIAgentOutputContextManagerImpl : NSObject

{
    struct OpaqueFigEndpointUIAgent *_agent;
    AVWeakReference *_weakObserver;
    AVOutputContextManager *_parentManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak) AVOutputContextManager *parentOutputContextManager;

+ (struct OpaqueFigEndpointUIAgent *)copySharedEndpointUIAgent;

- (void)dealloc;
- (id)initWithEndpointUIAgent:(struct OpaqueFigEndpointUIAgent *)arg1;
- (void)_showErrorPromptForRouteDescriptor:(struct __CFDictionary *)arg1 reason:(struct __CFString *)arg2;

@end
