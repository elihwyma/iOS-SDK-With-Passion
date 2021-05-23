/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAVFLoaderDelegate : NSObject

{
    WeakPtr_1a409454 m_player;
    struct GenericTaskQueue<WebCore::Timer> m_taskQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;
- (id)initWithPlayer:(WeakPtr_1a409454 *)arg1;

@end
