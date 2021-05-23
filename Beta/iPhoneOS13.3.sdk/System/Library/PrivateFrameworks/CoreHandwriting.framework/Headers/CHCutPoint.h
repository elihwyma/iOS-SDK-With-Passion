/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@interface CHCutPoint : NSObject

{
    _Bool _isEndOfStroke;
    long long _strokeIndex;
    long long _pointIndex;
}

@property (nonatomic, readonly) long long strokeIndex;
@property (nonatomic, readonly) long long pointIndex;
@property (nonatomic, readonly) _Bool isEndOfStroke;

+ (id)sortedCHCutPointArray:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (_Bool)isStartOfStroke;
- (id)initWithStrokeIndex:(long long)arg1 pointIndex:(long long)arg2 isEndOfStroke:(_Bool)arg3;

@end
