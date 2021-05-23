/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <Foundation/NSMutableData.h>

@interface NSMutableData (KAESGCM)

+ (id)dataWithRandomBytes:(int)arg1;

- (void)replaceTrailingWith7LSB:(unsigned long long)arg1;

@end
