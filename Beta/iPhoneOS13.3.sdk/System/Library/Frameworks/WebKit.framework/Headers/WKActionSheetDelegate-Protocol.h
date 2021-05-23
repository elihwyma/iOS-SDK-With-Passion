/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@protocol WKActionSheetDelegate

- (unsigned short)presentationRectForIndicatedElement;
- (unsigned short)presentationRectForElementUsingClosestIndicatedRect;
- (unsigned short)initialPresentationRectInHostViewForSheet;
- (unsigned short)hostViewForSheet;
- (unsigned short)updatePositionInformation;
- (unsigned short)presentationRectInHostViewForSheet;

@end
