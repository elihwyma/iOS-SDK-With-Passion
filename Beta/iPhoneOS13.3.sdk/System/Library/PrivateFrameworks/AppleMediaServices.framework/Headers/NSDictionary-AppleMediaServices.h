/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSDictionary.h>

@class NSDate, NSString;

@interface NSDictionary (AppleMediaServices)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *hashedDescription;
@property (nonatomic, readonly) NSDate *ams_expirationDate;
@property (nonatomic, readonly, getter=ams_isExpired) _Bool ams_expired;

+ (id)ams_dictionaryWithEncryptionResult:(CDStruct_0f015c83)arg1;

- (id)ams_filterUsingTest:(CDUnknownBlockType)arg1;
- (id)ams_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ams_mapWithTransform:(CDUnknownBlockType)arg1;
- (id)ams_objectForKey:(id)arg1 defaultValue:(id)arg2;
- (id)ams_objectForCaseInsensitiveKey:(id)arg1;
- (id)ams_arrayUsingTransform:(CDUnknownBlockType)arg1;
- (id)ams_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)ams_firstKeyObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ams_componentsJoinedByString:(id)arg1;
- (id)ams_firstKeyPassingTest:(CDUnknownBlockType)arg1;
- (CDStruct_0f015c83)ams_encryptionResult;

@end
