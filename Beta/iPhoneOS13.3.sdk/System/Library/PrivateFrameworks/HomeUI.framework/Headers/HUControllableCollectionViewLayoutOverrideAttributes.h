/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@interface HUControllableCollectionViewLayoutOverrideAttributes : NSObject

{
    long long _zIndex;
    double _alpha;
    struct CGAffineTransform _transform;
}

@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) long long zIndex;
@property (nonatomic) double alpha;

- (id)init;

@end
