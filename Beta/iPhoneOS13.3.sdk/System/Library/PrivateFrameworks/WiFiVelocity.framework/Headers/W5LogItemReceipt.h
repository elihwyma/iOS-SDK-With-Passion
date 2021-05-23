/*
 Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, W5LogItemRequest;

@interface W5LogItemReceipt : NSObject

{
    W5LogItemRequest *_request;
    NSArray *_relativeURLs;
    NSDictionary *_info;
    double _startedAt;
    double _completedAt;
}

@property (copy, nonatomic) W5LogItemRequest *request;
@property (copy, nonatomic) NSArray *relativeURLs;
@property (copy, nonatomic) NSDictionary *info;
@property (nonatomic) double startedAt;
@property (nonatomic) double completedAt;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToLogItemReceipt:(id)arg1;

@end
