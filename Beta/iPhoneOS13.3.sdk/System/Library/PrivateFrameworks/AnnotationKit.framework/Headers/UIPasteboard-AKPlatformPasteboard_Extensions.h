/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIPasteboard.h>

@interface UIPasteboard (AKPlatformPasteboard_Extensions)

- (void)akClearContents;
- (void)akPasteboardSetAnnotations:(id)arg1;
- (id)akPasteboardAnnotations;
- (_Bool)akPasteboardContainsAnnotations;

@end
