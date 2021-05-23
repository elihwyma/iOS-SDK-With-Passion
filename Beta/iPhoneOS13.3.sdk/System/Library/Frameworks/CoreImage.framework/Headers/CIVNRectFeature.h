/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIVNFeature.h>

@class CIRectangleFeature;

__attribute__((visibility("hidden")))
@interface CIVNRectFeature : CIVNFeature

@property (retain, readonly) CIRectangleFeature *ciRectangleFeature;

- (id)initWithVNObservation:(id)arg1;

@end
