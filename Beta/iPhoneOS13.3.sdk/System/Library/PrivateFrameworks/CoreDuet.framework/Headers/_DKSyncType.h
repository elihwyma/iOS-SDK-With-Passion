/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface _DKSyncType : NSObject

{
    _Bool _isSingleDevice;
    _Bool _forceSync;
    _Bool _isInitialSync;
    _Bool _isPeriodicSync;
    _Bool _isTriggeredSync;
    _Bool _didActivatePeer;
    _Bool _didReceivePush;
    _Bool _didAddSyncedEvents;
    _Bool _didDeleteSyncedEvents;
    unsigned long long _urgency;
    double _periodicSyncInterval;
    NSObject<OS_xpc_object> *_xpcActivity;
}

@property (nonatomic, readonly) _Bool isSingleDevice;
@property (nonatomic) _Bool forceSync;
@property (nonatomic) _Bool isInitialSync;
@property (nonatomic) _Bool isPeriodicSync;
@property (nonatomic) _Bool isTriggeredSync;
@property (nonatomic) unsigned long long urgency;
@property (nonatomic) _Bool didActivatePeer;
@property (nonatomic) _Bool didReceivePush;
@property (nonatomic) _Bool didAddSyncedEvents;
@property (nonatomic) _Bool didDeleteSyncedEvents;
@property (nonatomic) double periodicSyncInterval;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsSingleDevice:(_Bool)arg1;
- (void)mergeType:(id)arg1;
- (_Bool)isEqualToSyncType:(id)arg1;

@end
