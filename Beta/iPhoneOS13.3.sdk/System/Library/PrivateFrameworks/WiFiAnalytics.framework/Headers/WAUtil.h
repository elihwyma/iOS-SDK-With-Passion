/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <Foundation/NSObject.h>

@interface WAUtil : NSObject

+ (id)deviceName;
+ (id)_getBasePersistenceKeychainQuery;
+ (id)getObscureKey;
+ (id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)arg1;
+ (id)unobscureModelData:(id)arg1 forModelkey:(id)arg2;
+ (id)rotateUUIDsForMessage:(id)arg1;
+ (id)getCopyOfMessage:(id)arg1 withNumericalValuesSubstractedByValuesInMessage:(id)arg2;
+ (id)rotateObscureKey;
+ (_Bool)storeToken:(id)arg1 withIdentifier:(id)arg2;
+ (id)getTokenForIdentifier:(id)arg1;
+ (id)getMessageInstanceForKey:(id)arg1 andGroupType:(long long)arg2;
+ (id)groupTypeToString:(long long)arg1;
+ (id)groupTypeToAWDComponentID;
+ (id)trimTokenForLogging:(id)arg1;
+ (id)getValueForEntitlementForCurrentProcess:(id)arg1;
+ (id)_generateInvocationForMethod:(void *)arg1;

@end
