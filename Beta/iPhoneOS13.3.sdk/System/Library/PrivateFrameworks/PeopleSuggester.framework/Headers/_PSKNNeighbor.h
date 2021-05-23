/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class NSArray;

@interface _PSKNNeighbor : NSObject

{
    double _distance;
    NSArray *_nodeData;
}

@property (nonatomic) double distance;
@property (retain, nonatomic) NSArray *nodeData;

- (id)initWithNodeData:(id)arg1 distance:(double)arg2;

@end
