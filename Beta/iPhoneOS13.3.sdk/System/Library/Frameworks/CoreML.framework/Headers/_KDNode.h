/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _KDNode : NSObject <Swift>

{
    _Bool _isLeaf;
    float _splitValue;
    unsigned long long _splitDimension;
    unsigned long long _splitIndex;
    unsigned long long _startingIndex;
    unsigned long long _count;
    _KDNode *_leftChild;
    _KDNode *_rightChild;
    struct _KDBoundingBox _boundingBox;
}

@property (nonatomic) unsigned long long splitDimension;
@property (nonatomic) unsigned long long splitIndex;
@property (nonatomic) float splitValue;
@property (nonatomic) unsigned long long startingIndex;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) _KDNode *leftChild;
@property (retain, nonatomic) _KDNode *rightChild;
@property (nonatomic) struct _KDBoundingBox boundingBox;
@property (nonatomic) _Bool isLeaf;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (void)findMin:(float *)arg1 andMax:(float *)arg2 alongDimension:(unsigned long long)arg3 data:(const float *)arg4 indices:(const unsigned long long *)arg5 numDimensions:(unsigned long long)arg6;
- (void)partitionDataPoints:(const float *)arg1 indices:(unsigned long long *)arg2 numDimensions:(unsigned long long)arg3;
- (void)assignSplitsForData:(const float *)arg1 indices:(unsigned long long *)arg2 numDimensions:(unsigned long long)arg3;
- (void)print;

@end
