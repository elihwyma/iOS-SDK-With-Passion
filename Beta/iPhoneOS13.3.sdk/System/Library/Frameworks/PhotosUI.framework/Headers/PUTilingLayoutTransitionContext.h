/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface PUTilingLayoutTransitionContext : NSObject

{
    _Bool _isCancelingTransition;
    _Bool _isUpdatingDisplayedContent;
    NSObject<OS_dispatch_group> *_displayedContentUpdateGroup;
}

@property (nonatomic, setter=setCancelingTransition:) _Bool isCancelingTransition;
@property (nonatomic) _Bool isUpdatingDisplayedContent;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *displayedContentUpdateGroup;

@end
