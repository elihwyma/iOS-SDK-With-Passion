/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCTopicalNode;

@interface FCTopicalLeafNode : NSObject

{
    FCTopicalNode *_node;
    double _score;
}

@property (retain, nonatomic) FCTopicalNode *node;
@property (nonatomic) double score;

- (id)initWithNode:(id)arg1 score:(double)arg2;

@end
