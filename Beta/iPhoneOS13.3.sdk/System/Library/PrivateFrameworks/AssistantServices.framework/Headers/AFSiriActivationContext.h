/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface AFSiriActivationContext : NSObject <Swift>

{
    unsigned long long _timestamp;
    long long _source;
    long long _event;
    unsigned long long _options;
    NSString *_deviceID;
    NSDictionary *_userInfo;
}

@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) long long event;
@property (nonatomic, readonly) unsigned long long options;
@property (copy, nonatomic, readonly) NSString *deviceID;
@property (copy, nonatomic, readonly) NSDictionary *userInfo;

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
- (id)initWithTimestamp:(unsigned long long)arg1 source:(long long)arg2 event:(long long)arg3 options:(unsigned long long)arg4 deviceID:(id)arg5 userInfo:(id)arg6;

@end
