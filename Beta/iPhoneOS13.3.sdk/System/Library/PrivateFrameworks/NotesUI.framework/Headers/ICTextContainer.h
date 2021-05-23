/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/NSTextContainer.h>

@interface ICTextContainer : NSTextContainer

{
    _Bool _inPreviewMode;
}

@property (nonatomic) _Bool inPreviewMode;

- (_Bool)isSimpleRectangularTextContainer;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(struct CGRect *)arg4;

@end
