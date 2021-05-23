/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSWPAttachment.h>

@interface TSWPUIGraphicalAttachment : TSWPAttachment

@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double baselineOffset;

- (void)invalidate;
- (int)elementKind;
- (id)rendererForAttachment;
- (_Bool)wantsSelectionAtPoint:(struct CGPoint)arg1;

@end
