/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class FPPacer, NSDictionary, NSMutableSet;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPProviderDomainChangesReceiver : NSObject

{
    NSMutableSet *_changesHandlers;
    NSDictionary *_providerDomainsByID;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _notifyToken;
    int _settingsChangedToken;
    FPPacer *_pacer;
}

+ (id)sharedChangesReceiver;

- (id)_init;
- (void)signalChange;
- (void)updateProviderDomainsWithAttemptCount:(unsigned long long)arg1;
- (void)providerDomainsHaveChanged:(id)arg1 error:(id)arg2;
- (void)callChangesHandlersWithProviderDomains:(id)arg1 error:(id)arg2;
- (id)addChangesHandler:(CDUnknownBlockType)arg1;
- (void)removeChangesHandlerToken:(id)arg1;

@end
