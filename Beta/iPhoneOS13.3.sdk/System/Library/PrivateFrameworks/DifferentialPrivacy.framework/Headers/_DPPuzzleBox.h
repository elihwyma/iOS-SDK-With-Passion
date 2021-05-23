/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@interface _DPPuzzleBox : NSObject

{
    unsigned long long _k;
}

@property (nonatomic, readonly) unsigned long long k;

+ (id)puzzleBoxWithDimensionality:(unsigned long long)arg1;

- (id)init;
- (id)initWithDimensionality:(unsigned long long)arg1;
- (id)puzzlePieceFor:(id)arg1;

@end
