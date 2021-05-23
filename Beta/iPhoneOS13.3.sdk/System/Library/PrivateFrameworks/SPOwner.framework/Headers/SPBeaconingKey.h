/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSData, NSDateInterval;

@interface SPBeaconingKey : NSObject

{
    NSDateInterval *_dateInterval;
    NSData *_key;
}

@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) NSData *key;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 key:(id)arg2;

@end
