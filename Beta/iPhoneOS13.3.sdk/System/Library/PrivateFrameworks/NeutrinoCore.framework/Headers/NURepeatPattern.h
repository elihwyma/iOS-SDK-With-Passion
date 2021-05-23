/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUPattern.h>

@interface NURepeatPattern : NUPattern

{
    NUPattern *_pattern;
    long long _minCount;
    long long _maxCount;
}

@property (readonly) NUPattern *pattern;
@property (readonly) long long minCount;
@property (readonly) long long maxCount;

- (id)init;
- (id)stringRepresentation;
- (id)tokens;
- (id)shortestMatch;
- (id)optimizedPattern;
- (_Bool)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (_Bool)isEqualToPattern:(id)arg1;
- (_Bool)isFixedOrder;
- (id)initWithPattern:(id)arg1 count:(long long)arg2;
- (id)initWithPattern:(id)arg1 minCount:(long long)arg2;
- (id)initWithPattern:(id)arg1 minCount:(long long)arg2 maxCount:(long long)arg3;
- (_Bool)isEqualToRepeatPattern:(id)arg1;

@end
