/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <NSObject.h>

@class NSDate;

@interface FUStepTime : NSObject

{
    unsigned long long _type;
    NSDate *_date;
}

@property unsigned long long type;
@property (retain) NSDate *date;
@property (readonly) double timeIntervalSinceNow;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 date:(id)arg2;

@end
