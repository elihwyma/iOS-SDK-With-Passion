/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class TLAlert;

@interface TLAlertActivationAssertion : NSObject

{
    TLAlert *_alert;
    _Atomic long long _activeAcquisitionCount;
}

- (void)dealloc;
- (id)description;
- (void)acquire;
- (void)relinquish;
- (void)_acquire;
- (void)_relinquish;
- (id)initWithAlert:(id)arg1;

@end
