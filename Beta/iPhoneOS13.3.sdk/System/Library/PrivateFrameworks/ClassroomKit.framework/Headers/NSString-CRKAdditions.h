/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSString.h>

@interface NSString (CRKAdditions)

+ (id)crk_stringWithIPAddress:(unsigned int)arg1;

- (id)crk_sha1Hash;
- (id)crk_stringByRemovingPrefix:(id)arg1;
- (id)crk_stringByRemovingSuffix:(id)arg1;
- (_Bool)crk_isFourDigitPasscode;
- (id)crk_substringAfterString:(id)arg1;

@end
