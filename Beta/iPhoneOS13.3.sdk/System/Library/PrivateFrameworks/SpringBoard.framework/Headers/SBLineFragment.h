/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBLineFragment : NSObject

{
    unsigned long long _index;
    double _lineWidth;
    struct _NSRange _range;
}

@property (nonatomic) unsigned long long index;
@property (nonatomic) struct _NSRange range;
@property (nonatomic) double lineWidth;

+ (id)fragmentWithIndex:(unsigned long long)arg1 length:(unsigned long long)arg2 lineWidth:(double)arg3;

- (id)description;

@end
