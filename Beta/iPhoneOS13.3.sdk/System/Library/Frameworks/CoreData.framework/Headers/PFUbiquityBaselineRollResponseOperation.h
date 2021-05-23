/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFUbiquityBaselineRollOperation.h>

@class NSObject;

@protocol PFUbiquityBaselineRollResponseOperationDelegate;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation

@property NSObject<PFUbiquityBaselineRollResponseOperationDelegate> *delegate;

- (void)main;
- (id)retainedDelegate;
- (_Bool)canAdoptBaseline:(id)arg1 byReplacingLocalStoreFile:(_Bool *)arg2 withStack:(id)arg3 withError:(id *)arg4;

@end
