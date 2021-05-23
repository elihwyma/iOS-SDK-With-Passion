/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class _HKAuthorizationRecord;

__attribute__((visibility("hidden")))
@interface WDAuthorizationRecord : NSObject

{
    _HKAuthorizationRecord *_internalAuthorizationRecord;
    long long _status;
}

@property long long status;

- (id)init;
- (_Bool)requestedSharing;
- (_Bool)requestedReading;
- (id)initWithInternalAuthorizationRecord:(id)arg1;

@end
