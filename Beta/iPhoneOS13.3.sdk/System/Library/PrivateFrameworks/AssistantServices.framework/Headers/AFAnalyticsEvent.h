/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSData;

@interface AFAnalyticsEvent : NSObject <Swift>

{
    unsigned long long _deliveryStream;
    long long _type;
    unsigned long long _timestamp;
    long long _contextDataType;
    NSData *_contextData;
}

@property (nonatomic, readonly) unsigned long long deliveryStream;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) long long contextDataType;
@property (copy, nonatomic, readonly) NSData *contextData;

+ (_Bool)supportsSecureCoding;
+ (id)eventsReferenceTime;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)typeName;
- (id)initWithDeliveryStream:(unsigned long long)arg1 type:(long long)arg2 timestamp:(unsigned long long)arg3 contextDataType:(long long)arg4 contextData:(id)arg5;
- (id)contextDataAsProtobuf;
- (id)legacyTypeName;
- (id)contextDataAsDictionary;
- (id)dateStamp;

@end
