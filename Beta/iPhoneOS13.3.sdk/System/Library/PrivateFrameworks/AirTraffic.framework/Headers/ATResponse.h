/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <AirTraffic/ATMessage.h>

@class NSError;

@interface ATResponse : ATMessage

{
    _Bool _partial;
    NSError *_error;
}

@property (nonatomic, getter=isPartial) _Bool partial;
@property (retain, nonatomic) NSError *error;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)additionalDescription;

@end
