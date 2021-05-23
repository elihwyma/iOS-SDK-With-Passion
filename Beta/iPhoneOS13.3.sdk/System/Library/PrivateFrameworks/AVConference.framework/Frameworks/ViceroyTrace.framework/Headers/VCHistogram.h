/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <Foundation/NSObject.h>

@interface VCHistogram : NSObject

{
    unsigned int *_buckets;
    const unsigned int *_ranges;
    unsigned int _bucketCount;
}

@property (readonly) const unsigned int *ranges;

+ (const unsigned int *)bucketWithType:(int)arg1 count:(unsigned int *)arg2;
+ (id)rangesDescription:(int)arg1;

- (void)dealloc;
- (id)description;
- (id)array;
- (void)reset;
- (void)addValue:(unsigned int)arg1;
- (_Bool)merge:(id)arg1;
- (id)initWithType:(int)arg1 bucketValues:(id)arg2;
- (void)addValue:(unsigned int)arg1 withIncrement:(unsigned int)arg2;
- (unsigned int)bucketValueAtIndex:(unsigned int)arg1;

@end
