/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/NSTextAttachment.h>

__attribute__((visibility("hidden")))
@interface MKImageTextAttachment : NSTextAttachment

{
    double _verticalOffset;
}

@property (nonatomic) double verticalOffset;

- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)initWithImage:(id)arg1 verticalOffset:(double)arg2;

@end
