/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class NSNumber, _UILegibilitySettings;

@protocol CSStatusBarControlling <Swift>

@property (nonatomic, readonly) NSNumber *statusBarAlpha;
@property (nonatomic, readonly) long long statusBarStyle;
@property (nonatomic, readonly) _UILegibilitySettings *statusBarLegibilitySettings;

- (unsigned short)disableStatusBarItem:requestor: /* Error: Ran out of types for this method. */;
- (unsigned short)setStatusBarAlpha:style:legibilitySettings: /* Error: Ran out of types for this method. */;
- (unsigned short)enableStatusBarTime:crossfade:crossfadeDuration: /* Error: Ran out of types for this method. */;
- (unsigned short)updateStatusBarTimeEnabled;
- (unsigned short)clearStatusBarParameters;
- (unsigned short)setStatusBarHidden:forReason: /* Error: Ran out of types for this method. */;
- (unsigned short)destroyFakeStatusBar: /* Error: Ran out of types for this method. */;
- (unsigned short)createFakeStatusBarWithReason:withFrame: /* Error: Ran out of types for this method. */;
- (unsigned short)effectiveStatusBarStyleRequestForAlpha:style:legibilitySettings: /* Error: Ran out of types for this method. */;
- (unsigned short)enableStatusBarItem:requestor: /* Error: Ran out of types for this method. */;

@end
