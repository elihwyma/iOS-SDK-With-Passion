/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@interface ADLayoutOptions : NSObject

{
    struct CGSize _containerSize;
    struct CGSize _reorientedContainerSize;
}

@property (nonatomic) struct CGSize containerSize;
@property (nonatomic) struct CGSize reorientedContainerSize;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
