/*
 Image: /System/Library/PrivateFrameworks/AppleCVA.framework/AppleCVA
 */

#import <AppleCVA/Swift-Protocol.h>

@protocol MPSCNNConvolutionDataSource <Swift>

- (unsigned short)load;
- (unsigned short)label;
- (unsigned short)dataType;
- (unsigned short)weights;
- (unsigned short)descriptor;
- (unsigned short)biasTerms;
- (unsigned short)purge;

@end
