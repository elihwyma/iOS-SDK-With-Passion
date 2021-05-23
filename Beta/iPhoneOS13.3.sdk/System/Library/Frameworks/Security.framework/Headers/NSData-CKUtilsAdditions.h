/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSData.h>

@interface NSData (CKUtilsAdditions)

+ (id)CKDataWithHexString:(id)arg1 stringIsUppercase:(_Bool)arg2;
+ (id)CKDataWithHexString:(id)arg1;

- (id)CKUppercaseHexStringWithoutSpaces;
- (id)CKHexString;
- (id)CKLowercaseHexStringWithoutSpaces;

@end
