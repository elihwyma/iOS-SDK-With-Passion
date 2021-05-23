/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVStackSupplementalViewController.h>

@interface _TVStackWrappingViewController : _TVStackSupplementalViewController

{
    struct TVShowcaseConfig _showcaseConfig;
}

@property (nonatomic) struct TVShowcaseConfig showcaseConfig;

- (void)tv_setShowcaseConfig:(struct TVShowcaseConfig)arg1;

@end
