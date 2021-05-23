/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSArray;

@interface AFBluetoothWirelessSplitterSessionInfo : NSObject <Swift>

{
    long long _state;
    NSArray *_deviceAddresses;
}

@property (nonatomic, readonly) long long state;
@property (copy, nonatomic, readonly) NSArray *deviceAddresses;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithState:(long long)arg1 deviceAddresses:(id)arg2;

@end
