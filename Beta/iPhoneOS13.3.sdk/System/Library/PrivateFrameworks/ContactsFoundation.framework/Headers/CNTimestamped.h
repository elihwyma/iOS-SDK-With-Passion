/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@interface CNTimestamped : NSObject

{
    id _value;
    double _timestamp;
}

@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) double timestamp;

+ (CDUnknownBlockType)wrapTransformWithScheduler:(id)arg1;
+ (id)timestampedWithValue:(id)arg1 timestamp:(double)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithValue:(id)arg1 timestamp:(double)arg2;

@end
