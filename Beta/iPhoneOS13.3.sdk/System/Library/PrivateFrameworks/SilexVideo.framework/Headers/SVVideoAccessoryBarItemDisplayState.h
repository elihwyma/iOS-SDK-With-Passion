/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class UIView;

@protocol SVAccessoryItem;

@interface SVVideoAccessoryBarItemDisplayState : NSObject

{
    id <SVAccessoryItem> _item;
    UIView *_containerView;
    unsigned long long _displayMode;
    struct CGRect _frame;
}

@property (nonatomic, readonly) id <SVAccessoryItem> item;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) unsigned long long displayMode;
@property (nonatomic, readonly) struct CGRect frame;

- (_Bool)isEqual:(id)arg1;
- (id)initWithItem:(id)arg1 containerView:(id)arg2 displayMode:(unsigned long long)arg3 frame:(struct CGRect)arg4;

@end
