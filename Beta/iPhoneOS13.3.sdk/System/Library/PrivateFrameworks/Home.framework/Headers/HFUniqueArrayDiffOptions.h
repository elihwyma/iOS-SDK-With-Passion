/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@interface HFUniqueArrayDiffOptions : NSObject

{
    _Bool _allowMoves;
    CDUnknownBlockType _equalComparator;
    CDUnknownBlockType _hashGenerator;
    CDUnknownBlockType _changeComparator;
}

@property (copy, nonatomic) CDUnknownBlockType equalComparator;
@property (copy, nonatomic) CDUnknownBlockType hashGenerator;
@property (copy, nonatomic) CDUnknownBlockType changeComparator;
@property (nonatomic) _Bool allowMoves;

- (id)init;

@end
