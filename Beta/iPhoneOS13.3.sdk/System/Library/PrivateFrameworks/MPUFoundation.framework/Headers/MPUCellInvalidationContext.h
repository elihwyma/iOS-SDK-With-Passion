/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@interface MPUCellInvalidationContext : NSObject

{
    _Bool _invalidateEverything;
    _Bool _invalidateDownloadStatus;
    _Bool _invalidateLayout;
    _Bool _animated;
}

@property (nonatomic) _Bool invalidateEverything;
@property (nonatomic) _Bool invalidateDownloadStatus;
@property (nonatomic) _Bool invalidateLayout;
@property (nonatomic, getter=isAnimated) _Bool animated;

@end
