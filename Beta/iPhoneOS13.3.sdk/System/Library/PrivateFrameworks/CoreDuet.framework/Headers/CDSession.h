/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class CDDClientConnection;

@interface CDSession : NSObject

{
    _Bool _unlocked;
    CDDClientConnection *_cddClientConnection;
    unsigned long long _clientId;
}

@property (readonly) CDDClientConnection *cddClientConnection;
@property (readonly) unsigned long long clientId;
@property _Bool unlocked;

+ (id)sharedSessionWithClientId:(unsigned long long)arg1;

- (id)init;
- (id)description;
- (id)getDevicesInternal;
- (_Bool)isClassCLocked;
- (id)initWithClientId:(unsigned long long)arg1;
- (id)initWithClientId:(unsigned long long)arg1 enableCaching:(_Bool)arg2;
- (id)attributeNamesWithError:(id *)arg1;
- (id)budgetNamesWithError:(id *)arg1;
- (id)attributeForName:(id)arg1 type:(long long)arg2 clientId:(unsigned long long)arg3 error:(id *)arg4;
- (id)attributeForName:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (id)budgetForName:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (id)registerAttributeWithName:(id)arg1 type:(long long)arg2 dataProtectionClass:(id)arg3 error:(id *)arg4;
- (id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 error:(id *)arg4;
- (id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 withOptions:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)deleteClientDataWithError:(id *)arg1;
- (id)attributeFromFullname:(id)arg1 error:(id *)arg2;
- (id)representationStringFromAttribute:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (id)representationStringFromAttribute:(id)arg1 value:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)attributeFromRepresentation:(id)arg1 error:(id *)arg2;
- (id)attributeExtendedComponentsFromRepresentation:(id)arg1 error:(id *)arg2;
- (id)attributeComponentsFromRepresentation:(id)arg1 error:(id *)arg2;
- (_Bool)registerForDeviceChanges;
- (id)getDevices;
- (id)copyDevicesUncached;
- (_Bool)setDevicesChangedHandlerWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getDeviceFromDescription:(id)arg1 error:(id *)arg2;
- (_Bool)broadcastSystemDataWithError:(id *)arg1;
- (_Bool)setNonAppBundleIdWithError:(id)arg1 error:(id *)arg2;
- (_Bool)setNonAppBundlIdWithError:(id)arg1 error:(id *)arg2;
- (_Bool)setActiveComplications:(id)arg1 error:(id *)arg2;
- (_Bool)setGlancesLingeredOn:(id)arg1 error:(id *)arg2;

@end
