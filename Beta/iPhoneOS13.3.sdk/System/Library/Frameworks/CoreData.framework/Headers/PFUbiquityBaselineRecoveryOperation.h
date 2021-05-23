/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFUbiquityBaselineOperation.h>

@class NSObject;

@protocol PFUbiquityBaselineRecoveryOperationDelegate;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation

@property NSObject<PFUbiquityBaselineRecoveryOperationDelegate> *delegate;

- (_Bool)isEqual:(id)arg1;
- (void)main;
- (id)retainedDelegate;
- (_Bool)electBaselineURLFromVersions:(id)arg1 withBaseline:(id)arg2 error:(id *)arg3;
- (_Bool)hasCurrentBaseline;
- (_Bool)conflictsExistForBaseline:(id)arg1;
- (_Bool)resolveConflictsForBaseline:(id)arg1 withError:(id *)arg2;
- (_Bool)shouldReplaceLocalStoreWithBaseline:(id)arg1;
- (_Bool)replaceLocalStoreWithBaseline:(id)arg1 error:(id *)arg2;
- (id)electAncestorBaselineForConflictedBaselines:(id)arg1 dissentingBaselines:(id *)arg2;

@end
