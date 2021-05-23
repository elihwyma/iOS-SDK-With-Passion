/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@class SBUIBannerItem;

@protocol SBUIBannerSource, SBUIBannerTarget;

@interface SBUIBannerContext : NSObject

{
    SBUIBannerItem *_item;
    id <SBUIBannerSource> _source;
    id <SBUIBannerTarget> _target;
    _Bool _isValid;
}

@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly) SBUIBannerItem *item;
@property (nonatomic, readonly) id <SBUIBannerSource> source;
@property (nonatomic, readonly) id <SBUIBannerTarget> target;

- (id)description;
- (void)invalidate;
- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3;

@end
