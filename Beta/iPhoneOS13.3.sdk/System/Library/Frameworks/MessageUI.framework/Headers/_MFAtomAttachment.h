/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/NSTextAttachment.h>

@class _MFAtomLayoutView;

__attribute__((visibility("hidden")))
@interface _MFAtomAttachment : NSTextAttachment

{
    _MFAtomLayoutView *_atomView;
    id _representedObject;
}

@property (nonatomic, readonly) _MFAtomLayoutView *atomView;
@property (nonatomic, readonly) id representedObject;

+ (id)attachmentWithAtomLayoutView:(id)arg1 representedObject:(id)arg2;

- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)initWithAtomLayoutView:(id)arg1 representedObject:(id)arg2;

@end
