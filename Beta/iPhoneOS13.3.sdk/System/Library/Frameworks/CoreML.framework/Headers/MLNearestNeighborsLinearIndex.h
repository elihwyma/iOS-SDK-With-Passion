/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface MLNearestNeighborsLinearIndex : NSObject <Swift>

{
    vector_7584168e vData;
    vector_7584168e vDataL2Squared;
    unsigned long long _numDataPoints;
    unsigned long long _numDimensions;
}

@property (nonatomic) unsigned long long numDataPoints;
@property (nonatomic) unsigned long long numDimensions;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (vector_392775c5)findNearestNeighbors:(unsigned long long)arg1 toQueryPoint:(const vector_7584168e *)arg2;
- (_Bool)updateWithData:(const vector_7584168e *)arg1 error:(id *)arg2;
- (unsigned long long)dataPointCount;
- (id)initWithDataset:(vector_7584168e)arg1 numberOfDimensions:(unsigned long long)arg2;

@end
