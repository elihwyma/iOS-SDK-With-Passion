/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSTimer, UITableViewCell;

@interface PSTableCellHighlightContext : NSObject

{
    NSTimer *_timer;
    _Bool _animateUnhighlight;
    _Bool _valid;
    UITableViewCell *_cell;
    long long _originalSelectionStyle;
}

@property (weak, nonatomic) UITableViewCell *cell;
@property (nonatomic, readonly) _Bool animateUnhighlight;
@property (nonatomic) long long originalSelectionStyle;
@property (nonatomic, readonly) _Bool valid;

+ (id)contextWithCell:(id)arg1;

- (void)dealloc;
- (void)invalidate;
- (void)_timerFired;
- (void)_killTimer;
- (void)performHighlightForDuration:(double)arg1 animateUnhighlight:(_Bool)arg2;

@end
