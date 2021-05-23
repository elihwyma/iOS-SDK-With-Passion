/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <UIKit/UIView.h>

#import <MediaControls/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsMaterialView : UIView <Swift>

{
    UIView *_backgroundView;
    UIView *_highlightView;
    _Bool _highlighted;
}

@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)arg1;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
