/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFInterstitialConfiguration, NSMutableArray, NSString;

@protocol AFInterstitialProviderDelegate, OS_dispatch_queue;

@interface AFInterstitialProvider : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    AFInterstitialConfiguration *_configuration;
    NSMutableArray *_pendingActions;
    id _context;
    id <AFInterstitialProviderDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (id)initWithStyle:(long long)arg1 recordRoute:(id)arg2 isVoiceTrigger:(_Bool)arg3 isDucking:(_Bool)arg4 isTwoShot:(_Bool)arg5 speechEndHostTime:(unsigned long long)arg6 context:(id)arg7 delegate:(id)arg8;
- (void)_performNextAction;

@end
