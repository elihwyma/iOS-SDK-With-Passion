/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@interface MSVEntitlementUtilities : NSObject

+ (_Bool)_checkEntitlement:(id)arg1 inGroup:(id)arg2;
+ (id)_checkArrayEntitlement:(id)arg1 group:(id)arg2 task:(struct __SecTask *)arg3;
+ (id)_checkBooleanEntitlement:(id)arg1 task:(struct __SecTask *)arg2;
+ (void)_processKeyChainResult:(id)arg1;
+ (_Bool)hasEntitlement:(id)arg1 inGroup:(id)arg2;
+ (_Bool)hasBoolEntitlement:(id)arg1;

@end
