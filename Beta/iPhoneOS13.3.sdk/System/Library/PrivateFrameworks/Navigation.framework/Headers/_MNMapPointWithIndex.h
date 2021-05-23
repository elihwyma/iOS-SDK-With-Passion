/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MNMapPointWithIndex : NSObject

{
    _Bool _isStartOfSegment;
    _Bool _isPolylineA;
    _Bool _isFlipped;
    unsigned long long _index;
    Matrix_2bdd42a3 _point;
    LineSegment_ede69d4d _segment;
}

@property (nonatomic) Matrix_2bdd42a3 point;
@property (nonatomic) unsigned long long index;
@property (nonatomic) _Bool isStartOfSegment;
@property (nonatomic) _Bool isPolylineA;
@property (nonatomic) _Bool isFlipped;
@property (nonatomic) LineSegment_ede69d4d segment;

- (id).cxx_construct;

@end
