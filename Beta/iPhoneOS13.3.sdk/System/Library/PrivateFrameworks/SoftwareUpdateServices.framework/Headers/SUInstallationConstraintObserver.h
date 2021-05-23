/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/SUComposedInstallationConstraintMonitor.h>

@class NSMapTable, NSString, SUDownload;

@protocol SUInstallationConstraintObserverDelegate;

@interface SUInstallationConstraintObserver : SUComposedInstallationConstraintMonitor

{
    id <SUInstallationConstraintObserverDelegate> _delegate;
    SUDownload *_download;
    NSMapTable *_queue_observerBlockTokens;
    _Bool _queue_invalidated;
    unsigned long long _queue_tokenCount;
}

@property (nonatomic) id <SUInstallationConstraintObserverDelegate> delegate;
@property (retain, nonatomic, readonly) SUDownload *download;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (id)initWithDownload:(id)arg1;
- (void)_queue_noteInstallationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2;
- (void)_removeToken:(id)arg1;
- (id)initWithDownload:(id)arg1 queue:(id)arg2 constraints:(id)arg3;
- (id)registerObserverBlock:(CDUnknownBlockType)arg1;
- (id)monitorOfClass:(Class)arg1;
- (_Bool)_hasAnyBlockObservers;

@end
