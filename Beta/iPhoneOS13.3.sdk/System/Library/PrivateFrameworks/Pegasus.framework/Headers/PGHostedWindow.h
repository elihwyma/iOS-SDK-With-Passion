/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <_UIHostedWindow.h>

@class PGHostedWindowHostingHandle;

__attribute__((visibility("hidden")))
@interface PGHostedWindow : _UIHostedWindow

@property (nonatomic, readonly) PGHostedWindowHostingHandle *hostedWindowHostingHandle;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)_canBecomeKeyWindow;

@end
