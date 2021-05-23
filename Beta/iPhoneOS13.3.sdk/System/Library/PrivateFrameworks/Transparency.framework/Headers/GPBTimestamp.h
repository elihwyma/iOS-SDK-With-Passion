/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSDate;

__attribute__((visibility("hidden")))
@interface GPBTimestamp

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double timeIntervalSince1970;
@property (nonatomic) long long seconds;
@property (nonatomic) int nanos;

+ (id)descriptor;

- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithDate:(id)arg1;

@end
