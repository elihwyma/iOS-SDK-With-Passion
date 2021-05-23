/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FBApplicationTerminationAssertionServiceDelegate;

@interface FBApplicationTerminationAssertionService : NSObject

{
    id <FBApplicationTerminationAssertionServiceDelegate> _delegate;
}

@property (weak, nonatomic) id <FBApplicationTerminationAssertionServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;
- (id)_reasonForEfficacy:(unsigned long long)arg1;
- (unsigned long long)_efficacyForReason:(id)arg1;
- (void)_notifyDelegateOfRelinquishForBundleID:(id)arg1;
- (void)_notifyDelegateOfAcquisitionForBundleID:(id)arg1 efficacy:(unsigned long long)arg2;
- (id)terminationAssertionsForBundleID:(id)arg1;
- (id)terminationAssertionsForBundleID:(id)arg1 withReason:(id)arg2;

@end
