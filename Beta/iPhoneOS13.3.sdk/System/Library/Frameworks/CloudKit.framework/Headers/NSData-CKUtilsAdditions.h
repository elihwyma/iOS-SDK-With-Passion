/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSData.h>

@class NSString;

@interface NSData (CKUtilsAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)CKDataWithHexString:(id)arg1 stringIsUppercase:(_Bool)arg2;
+ (id)CKDataWithHexString:(id)arg1;
+ (id)CKDataFromBase64URLSafeString:(id)arg1;

- (id)CKUppercaseHexStringWithoutSpaces;
- (id)CKHexString;
- (id)CKLowercaseHexStringWithoutSpaces;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)CKBase64URLSafeString;
- (id)CKSHA256;
- (id)hashedDescription;

@end
