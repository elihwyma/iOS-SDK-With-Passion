/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <NSObject.h>

@class NSArray, NSMutableArray;

@interface MLPNDArrayLossLabels : NSObject

{
    NSMutableArray *_largeReductionSumResult;
    NSMutableArray *_smallReductionSumResult;
    NSArray *_labels;
}

@property (retain) NSMutableArray *largeReductionSumResult;
@property (retain) NSMutableArray *smallReductionSumResult;
@property (retain) NSArray *labels;

- (id)init;

@end
