/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNUIIDSAvailabilityProvider;

@interface CNUIIDSContactPropertyResolver : NSObject

{
    CNUIIDSAvailabilityProvider *_idsAvailabilityProvider;
}

@property (nonatomic, readonly) CNUIIDSAvailabilityProvider *idsAvailabilityProvider;

+ (id)descriptorForRequiredKeys;
+ (id)descriptorForCopyingStrippedContact:(id)arg1;
+ (id)IDSRelevantPropertiesForContact:(id)arg1;

- (id)initWithIDSAvailabilityProvider:(id)arg1;
- (id)resolveBestIMessageIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2;
- (id)resolveBestFaceTimeIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2;
- (id)resolveBestIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 usingAvailabilityProviderCall:(CDUnknownBlockType)arg3;

@end
