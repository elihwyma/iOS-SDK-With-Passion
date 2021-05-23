/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont, UIImage, WFVariableAttachment;

@interface WFVariableAttachmentCell : NSObject

{
    WFVariableAttachment *_attachment;
    UIImage *_cachedImage;
    unsigned long long _cachedImageControlState;
    UIFont *_cachedImageFont;
    UIColor *_cachedImageTintColor;
    NSString *_cachedImageVariableName;
}

@property (retain, nonatomic) UIImage *cachedImage;
@property (nonatomic) unsigned long long cachedImageControlState;
@property (retain, nonatomic) UIFont *cachedImageFont;
@property (retain, nonatomic) UIColor *cachedImageTintColor;
@property (copy, nonatomic) NSString *cachedImageVariableName;
@property (weak, nonatomic) WFVariableAttachment *attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (struct CGSize)cellSize;
- (struct CGPoint)cellBaselineOffset;
- (void)clearCachedImage;
- (unsigned long long)currentControlState;
- (id)attachmentImageForSize:(struct CGSize)arg1;

@end
