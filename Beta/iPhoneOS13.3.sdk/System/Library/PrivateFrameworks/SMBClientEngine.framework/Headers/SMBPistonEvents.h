/*
 Image: /System/Library/PrivateFrameworks/SMBClientEngine.framework/SMBClientEngine
 */

#import <Foundation/NSObject.h>

@interface SMBPistonEvents : NSObject

{
    struct smb_lease_break _leaseBreak;
}

@property struct smb_lease_break leaseBreak;

@end
