/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDConceptIndexManager, HDHealthOntologyManager, HDHealthRecordsNotificationManager, HDOntologyAssetManager, HDProfile, NSString;

@protocol HDOntologyTester;

@interface HDOntologyLifecycleManager : NSObject

{
    struct os_unfair_lock_s _ivarLock;
    _Bool _ready;
    HDProfile *_profile;
    HDOntologyAssetManager *_assetManager;
    HDHealthOntologyManager *_ontologyManager;
    HDConceptIndexManager *_indexManager;
    HDHealthRecordsNotificationManager *_notificationManager;
    id <HDOntologyTester> _ontologyTester;
}

@property (retain, nonatomic) HDOntologyAssetManager *assetManager;
@property (retain, nonatomic) HDHealthOntologyManager *ontologyManager;
@property (nonatomic, getter=isReady) _Bool ready;
@property (weak, nonatomic) id <HDOntologyTester> ontologyTester;
@property (weak, nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) HDConceptIndexManager *indexManager;
@property (nonatomic, readonly) HDHealthRecordsNotificationManager *notificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)invalidateAndWait;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)obliterateWithReason:(id)arg1;
- (void)ontologyManagerReferenceOntologyWillUpdate:(id)arg1;
- (void)ontologyManagerReferenceOntologyFinishedUpdate:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)ontologyManagerReferenceOntologyCreated:(id)arg1;
- (void)_disableAllManagers;
- (void)_enableAllManagers;
- (void)_evaluateManagerState;
- (void)profileExtension:(id)arg1 accountEventOccurred:(unsigned long long)arg2;

@end
