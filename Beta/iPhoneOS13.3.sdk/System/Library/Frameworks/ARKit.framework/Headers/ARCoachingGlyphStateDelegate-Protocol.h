/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/Swift-Protocol.h>

@protocol ARCoachingGlyphStateDelegate <Swift>

- (unsigned short)snapStateChanged;
- (unsigned short)quaternionTargetChanged;
- (unsigned short)scaleTargetChanged;
- (unsigned short)topPlaneTranslationTargetChanged;
- (unsigned short)bottomPlaneTranslationTargetChanged;

@end
