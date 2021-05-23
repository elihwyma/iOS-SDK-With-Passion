/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface NPLocation : NSObject

{
    double _latitude;
    double _longtitude;
    NSDate *_timestamp;
}

@property (readonly) _Bool isValid;
@property double latitude;
@property double longtitude;
@property (retain) NSDate *timestamp;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longtitude:(double)arg2 timestamp:(id)arg3;

@end
