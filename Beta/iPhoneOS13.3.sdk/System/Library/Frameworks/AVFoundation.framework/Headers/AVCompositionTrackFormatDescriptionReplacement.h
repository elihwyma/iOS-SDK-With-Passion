/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@interface AVCompositionTrackFormatDescriptionReplacement : NSObject

{
    struct opaqueCMFormatDescription *_originalFormatDescription;
    struct opaqueCMFormatDescription *_replacementFormatDescription;
}

@property (readonly) const struct opaqueCMFormatDescription *originalFormatDescription;
@property (readonly) const struct opaqueCMFormatDescription *replacementFormatDescription;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalFormatDescription:(struct opaqueCMFormatDescription *)arg1 andReplacementFormatDescription:(struct opaqueCMFormatDescription *)arg2;

@end
