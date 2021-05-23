/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSArray, NSUUID;

@interface ATXLocationOfInterest : NSObject

{
    NSUUID *_uuid;
    NSArray *_visits;
    long long _type;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSArray *visits;
@property (nonatomic, readonly) long long type;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToLocation:(id)arg1;
- (id)initWithUUID:(id)arg1 visits:(id)arg2 type:(long long)arg3;
- (id)initWithUUID:(id)arg1 visits:(id)arg2;
- (void)addVisitFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;

@end
