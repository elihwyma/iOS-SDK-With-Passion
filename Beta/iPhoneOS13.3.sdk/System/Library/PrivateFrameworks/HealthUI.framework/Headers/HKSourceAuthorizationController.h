/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKSource, NSArray, NSDictionary, NSMutableSet, NSSet;

@protocol HKSourceAuthorizationControllerDelegate;

@interface HKSourceAuthorizationController : NSObject

{
    _Bool _isUpdatingAllTypes;
    HKHealthStore *_healthStore;
    HKSource *_source;
    id <HKSourceAuthorizationControllerDelegate> _delegate;
    NSArray *_orderedTypesForSharing;
    NSArray *_orderedTypesForReading;
    NSMutableSet *_typesEnabledForSharing;
    NSMutableSet *_typesEnabledForReading;
    NSSet *_requestedTypesForSharing;
    NSSet *_requestedTypesForReading;
    NSDictionary *_requestedDocumentAuths;
}

@property (retain, nonatomic) NSArray *orderedTypesForSharing;
@property (retain, nonatomic) NSArray *orderedTypesForReading;
@property (retain, nonatomic) NSMutableSet *typesEnabledForSharing;
@property (retain, nonatomic) NSMutableSet *typesEnabledForReading;
@property (retain, nonatomic) NSSet *requestedTypesForSharing;
@property (retain, nonatomic) NSSet *requestedTypesForReading;
@property (retain, nonatomic) NSDictionary *requestedDocumentAuths;
@property (nonatomic) _Bool isUpdatingAllTypes;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKSource *source;
@property (weak, nonatomic) id <HKSourceAuthorizationControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool anyTypeRequested;

- (void)reload;
- (id)initWithHealthStore:(id)arg1 source:(id)arg2 typesForSharing:(id)arg3 typesForReading:(id)arg4;
- (_Bool)anyTypeEnabled;
- (long long)_authorizationStatusWithType:(id)arg1;
- (_Bool)allTypesEnabled;
- (void)_reloadTypeAuthorizationRecords;
- (void)_reloadDocumentAuthorizationRecords;
- (id)_sortedTypes:(id)arg1;
- (id)typesInSection:(long long)arg1;
- (id)_enabledTypesInSection:(long long)arg1;
- (_Bool)_parentTypeDisabledForType:(id)arg1 inSection:(long long)arg2;
- (id)_enabledSubTypesForType:(id)arg1 inSection:(long long)arg2;
- (void)_updateAuthorizationStatusWithTypes:(id)arg1;
- (_Bool)isTypeEnabled:(id)arg1 inSection:(long long)arg2;
- (_Bool)allTypesEnabledInSection:(long long)arg1;
- (void)setEnabled:(_Bool)arg1 forType:(id)arg2 inSection:(long long)arg3 commit:(_Bool)arg4;
- (void)_setAuthorizationStatuses:(id)arg1;
- (_Bool)isRequestingDocumentAuthorization;
- (unsigned long long)countOfTypesInSection:(long long)arg1;
- (id)objectAuthorizationStatusesForDocuments;
- (void)commitObjectAuthorizationStatuses:(id)arg1;
- (void)resetObjectAuthorizationStatuses;
- (void)setEnabled:(_Bool)arg1 forAllTypesInSection:(long long)arg2 commit:(_Bool)arg3;
- (void)commitAuthorizationStatuses;

@end
