/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSString, PFUbiquityContainerIdentifier, PFUbiquityLocation;

@protocol NSObject><NSCopying><NSCoding, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PFUbiquityContainerMonitor : NSObject

{
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    int _containerState;
    int _monitorState;
    _Bool _hasScheduledCheckBlock;
    int _scheduleSpinLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
    id <NSObject><NSCopying><NSCoding> _currentIdentityToken;
    PFUbiquityContainerIdentifier *_containerIdentifier;
}

@property (nonatomic) int containerState;
@property (nonatomic) int monitorState;
@property (nonatomic, readonly) PFUbiquityContainerIdentifier *containerIdentifier;
@property (nonatomic, readonly) id <NSObject><NSCopying><NSCoding> currentIdentityToken;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)startMonitor:(id *)arg1;
- (void)stopMonitor;
- (id)initWithProcessingQueue:(id)arg1 localPeerID:(id)arg2 storeName:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (void)willChangeContainerState;
- (void)didChangeContainerState;
- (void)willChangeMonitorState;
- (void)didChangeMonitorState;
- (void)willChangeContainerIdentifier:(unsigned long long)arg1;
- (void)containerDeleteDetected:(id)arg1;
- (void)didChangeContainerIdentifier:(unsigned long long)arg1;
- (void)_applicationResumed:(id)arg1;
- (void)ubiquityIdentityChanged:(id)arg1;
- (void)setContainerIdentifier:(id)arg1 transitionType:(unsigned long long)arg2;
- (void)scheduleCheckBlock:(id)arg1;
- (void)checkStoresAndContainer:(id)arg1;

@end
