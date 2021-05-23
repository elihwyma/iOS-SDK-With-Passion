/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SBPearlMatchingStateProviderDelegate, SBUIBiometricResource;

@interface SBCoverSheetBiometricResourceObserver : NSObject

{
    _Bool _seenMatchResultSinceScreenOn;
    id <SBPearlMatchingStateProviderDelegate> _delegate;
    id <SBUIBiometricResource> _biometricResource;
}

@property (nonatomic) _Bool seenMatchResultSinceScreenOn;
@property (weak, nonatomic) id <SBUIBiometricResource> biometricResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBPearlMatchingStateProviderDelegate> delegate;
@property (nonatomic, readonly) _Bool pearlMatchEnabledAndPossible;

- (void)reset;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (id)initWithBiometricResource:(id)arg1;
- (void)setSeenMatchResultSinceScreenOn:(_Bool)arg1 notifyDelegate:(_Bool)arg2;

@end
