/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@interface PGTitleGeneratorTypeMatching : NSObject

{
    long long _type;
    CDUnknownBlockType _eventEvaluationBlock;
}

@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) CDUnknownBlockType eventEvaluationBlock;

+ (id)typeMatchingWithType:(long long)arg1 eventEvaluationBlock:(CDUnknownBlockType)arg2;

- (id)initWithType:(long long)arg1 eventEvaluationBlock:(CDUnknownBlockType)arg2;

@end
