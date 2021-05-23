/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMEvent.h>

#import <HomeKit/Swift-Protocol.h>

@class CLRegion, HMFLocationAuthorization;

@interface HMLocationEvent : HMEvent <Swift>

{
    int _locationAuthorization;
    CLRegion *_region;
    HMFLocationAuthorization *_authorization;
}

@property (readonly) HMFLocationAuthorization *authorization;
@property (nonatomic) int locationAuthorization;
@property (retain, nonatomic) CLRegion *region;

+ (_Bool)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegion:(id)arg1;
- (void)__configureWithContext:(id)arg1 eventTrigger:(id)arg2;
- (void)_updateRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_serializeForAdd;
- (id)initWithDict:(id)arg1 region:(id)arg2;
- (void)_retrieveLocationEvent;
- (void)updateRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (void)__locationAuthorizationUpdated:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;

@end
