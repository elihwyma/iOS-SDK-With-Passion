/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKRecordValueStore.h>

@interface CKEncryptedRecordValueStore : CKRecordValueStore

- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setCompatibilityModeObjectNoValidate:(id)arg1 forKey:(id)arg2;
- (void)_validatePlainTextSizeOnEncryptedData:(id)arg1 forKey:(id)arg2;

@end
