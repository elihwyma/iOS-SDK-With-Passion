/*
 Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface TPMachineID : NSObject

{
    NSString *_machineID;
    unsigned long long _status;
    NSDate *_modified;
}

@property (readonly) NSString *machineID;
@property (readonly) unsigned long long status;
@property (readonly) NSDate *modified;

- (id)description;
- (id)initWithMachineID:(id)arg1 status:(unsigned long long)arg2 modified:(id)arg3;

@end
