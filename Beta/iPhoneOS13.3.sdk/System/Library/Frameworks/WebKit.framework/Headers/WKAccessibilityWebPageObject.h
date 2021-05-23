/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/WKAccessibilityWebPageObjectBase.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase

{
    NSData *_remoteTokenData;
}

@property (retain, nonatomic) NSData *remoteTokenData;

- (id)init;
- (void)dealloc;
- (void)_accessibilityCategoryInstalled:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (double)pageScale;

@end
