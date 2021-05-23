/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputContextManagerInternal;

@interface AVOutputContextManager : NSObject

{
    AVOutputContextManagerInternal *_ivars;
}

+ (id)outputContextManagerForAllOutputContexts;

- (void)dealloc;
- (id)initWithOutputContextManagerImpl:(id)arg1;
- (void)outputContextManagerImplDidExpireWithReplacementImpl:(id)arg1;
- (void)outputContextManagerImpl:(id)arg1 observedFailureToConnectToOutputDevice:(id)arg2 reason:(id)arg3;

@end
