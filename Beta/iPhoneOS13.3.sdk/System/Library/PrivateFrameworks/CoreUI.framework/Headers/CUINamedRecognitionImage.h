/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedLookup.h>

@interface CUINamedRecognitionImage : CUINamedLookup

@property (nonatomic, readonly) struct CGImage *image;
@property (nonatomic, readonly) struct CGSize physicalSizeInMeters;
@property (nonatomic, readonly) int exifOrientation;

- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end
