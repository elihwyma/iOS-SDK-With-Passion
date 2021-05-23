/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

__attribute__((visibility("hidden")))
@interface GPBDuration

@property (nonatomic) double timeInterval;
@property (nonatomic) double timeIntervalSince1970;
@property (nonatomic) long long seconds;
@property (nonatomic) int nanos;

+ (id)descriptor;

- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithTimeInterval:(double)arg1;

@end
