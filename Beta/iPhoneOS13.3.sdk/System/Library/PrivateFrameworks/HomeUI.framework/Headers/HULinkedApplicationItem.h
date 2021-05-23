/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class NSString;

@interface HULinkedApplicationItem : HFItem

@property (nonatomic, readonly) NSString *bundleIdentifier;

- (int)_iconVariantForScale:(double)arg1;
- (id)_failedUpdateOutcome;

@end
