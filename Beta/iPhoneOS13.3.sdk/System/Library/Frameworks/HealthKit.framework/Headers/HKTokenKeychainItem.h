/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HKTokenKeychainItem : NSObject

{
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSString *name;

+ (id)_fetchTokenIdentifiedByName:(id)arg1 error:(id *)arg2;
+ (_Bool)_storeTokenIdentifiedByName:(id)arg1 data:(id)arg2 error:(out id *)arg3;
+ (_Bool)_deleteTokenIdentifiedByName:(id)arg1 error:(out id *)arg2;
+ (id)tokenKeychainItemSecurityClass;
+ (id)_identifyingAttributesForKeyIdentifiedByName:(id)arg1;
+ (id)_keyQueryAttributesForKeyIdentifiedByName:(id)arg1;
+ (id)_storableAttributesForKeyIdentifiedByName:(id)arg1 data:(id)arg2 modificationDate:(id)arg3;

- (id)init;
- (id)initWithName:(id)arg1;
- (_Bool)deleteWithError:(id *)arg1;
- (id)fetchWithError:(id *)arg1;
- (_Bool)storeToken:(id)arg1 error:(id *)arg2;

@end
