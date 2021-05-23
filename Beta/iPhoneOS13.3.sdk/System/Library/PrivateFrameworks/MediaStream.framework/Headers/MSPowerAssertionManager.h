/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@interface MSPowerAssertionManager : NSObject

{
    _Bool _isAssertingPowerAssertion;
    _Bool _isBusy;
    int _busyCount;
    int _UIBusyCount;
    unsigned int _assertionID;
}

@property (nonatomic) _Bool isBusy;
@property (nonatomic) _Bool isAssertingPowerAssertion;
@property (nonatomic) unsigned int assertionID;
@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;

+ (id)sharedManager;

- (void)retainBusy;
- (void)releaseBusy;
- (void)retainUIBusy;
- (void)releaseUIBusy;
- (void)_assertPowerAssertion;
- (void)_deassertPowerAssertion;
- (void)_recomputePowerAssertion;
- (void)toggleAssertion;

@end
