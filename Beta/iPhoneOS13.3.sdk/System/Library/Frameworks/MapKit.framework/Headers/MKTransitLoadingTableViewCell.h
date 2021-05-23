/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIActivityIndicatorView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitLoadingTableViewCell

{
    _MKUILabel *_loadingLabel;
    UIActivityIndicatorView *_loadingIndicator;
}

- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;

@end
