/*
 Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

#import <UIKit/UIView.h>

@class NSString;

@interface UIView (MTVisualStylingProviderAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)visualStylingProviderForCategory:(long long)arg1;
- (void)mt_removeAllVisualStyling;
- (void)mt_replaceVisualStyling:(id)arg1;
- (void)_mt_applyVisualStyling:(id)arg1;

@end
