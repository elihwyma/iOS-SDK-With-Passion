/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class IKViewElement, NSString, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIBadgeViewWrapper : NSObject

{
    _TVImageView *_badgeView;
    IKViewElement *_badgeElement;
    NSString *_badgeType;
    struct CGSize _badgeSize;
    struct CGRect _badgeFrame;
}

@property (retain, nonatomic) _TVImageView *badgeView;
@property (retain, nonatomic) IKViewElement *badgeElement;
@property (nonatomic) struct CGSize badgeSize;
@property (nonatomic) struct CGRect badgeFrame;
@property (retain, nonatomic) NSString *badgeType;

@end
