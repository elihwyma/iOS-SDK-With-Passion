/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@interface RMSPairingCredentials : NSObject

{
    unsigned long long _requirementType;
    unsigned long long _characterCount;
}

@property (nonatomic) unsigned long long requirementType;
@property (nonatomic) unsigned long long characterCount;

- (id)protobuf;
- (id)initWithProtobuf:(id)arg1;

@end
