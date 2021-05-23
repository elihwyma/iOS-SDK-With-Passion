/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <MobileBackup/MBDigest.h>

@interface MBDigestSHA1 : MBDigest

{
    struct CC_SHA1state_st _context;
}

- (id)init;
- (void)updateWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)finalWithBytes:(void *)arg1 length:(unsigned long long)arg2;
- (id)final;

@end
