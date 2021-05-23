/*
 Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface W5Event : NSObject

{
    long long _eventID;
    double _timestamp;
    NSDictionary *_info;
}

@property (nonatomic) long long eventID;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSDictionary *info;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
