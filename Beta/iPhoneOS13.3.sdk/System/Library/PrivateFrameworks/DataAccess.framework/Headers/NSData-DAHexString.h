/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSData.h>

@interface NSData (DAHexString)

+ (id)da_dataWithHexString:(id)arg1 stringIsUppercase:(_Bool)arg2;
+ (id)da_dataWithHexString:(id)arg1;

- (id)da_hexString;
- (id)da_lowercaseHexStringWithoutSpaces;
- (id)da_uppercaseHexStringWithoutSpaces;

@end
