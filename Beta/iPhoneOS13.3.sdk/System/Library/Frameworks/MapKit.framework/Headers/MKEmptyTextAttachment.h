/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/NSTextAttachment.h>

__attribute__((visibility("hidden")))
@interface MKEmptyTextAttachment : NSTextAttachment

{
    double _width;
}

- (id)initWithWidth:(double)arg1;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;

@end
