/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@class _KDNode;

@interface MLNearestNeighborsSingleKdTreeIndex : NSObject <Swift>

{
    vector_7584168e vData;
    vector_06e666a8 vIndices;
    unsigned long long _numDimensions;
    unsigned long long _leafSize;
    _KDNode *_root;
}

@property (nonatomic) unsigned long long numDimensions;
@property (nonatomic) unsigned long long leafSize;
@property (retain, nonatomic) _KDNode *root;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (vector_392775c5)findNearestNeighbors:(unsigned long long)arg1 toQueryPoint:(const vector_7584168e *)arg2;
- (_Bool)updateWithData:(const vector_7584168e *)arg1 error:(id *)arg2;
- (unsigned long long)dataPointCount;
- (id)initWithDataset:(vector_7584168e *)arg1 numberOfDimensions:(unsigned long long)arg2 leafSize:(unsigned long long)arg3 error:(id *)arg4;
- (id)constructTree;
- (id)constructTreeForPointsBoundedBy:(struct _KDBoundingBox *)arg1 startingIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (vector_392775c5)calculateDistancesForNodesBetweenLeft:(unsigned long long)arg1 andRight:(unsigned long long)arg2 toQueryPoint:(const vector_7584168e *)arg3;
- (void)findK:(unsigned long long)arg1 nearestNeighbors:(struct _KDPriorityQueue *)arg2 toQueryPoint:(const vector_7584168e *)arg3 inTree:(id)arg4;

@end
