/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _TVRCRapportDeviceRecord : NSObject

{
    NSString *_ids;
    unsigned long long _transports;
}

@property (copy, nonatomic) NSString *ids;
@property (nonatomic) unsigned long long transports;

- (id)description;
- (id)initWithIDS:(id)arg1;
- (_Bool)hasAvailableTransports;

@end
