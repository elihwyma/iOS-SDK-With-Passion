/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/NSTextAttachment.h>

@class NSAttributedString, NSDictionary, NSString;

@interface WFValueTextAttachment : NSTextAttachment

{
    _Bool _selected;
    _Bool _requiresRedraw;
    NSAttributedString *_displayString;
    NSString *_stringValue;
    NSDictionary *_attributes;
    double _cornerRadius;
}

@property (nonatomic, readonly) NSAttributedString *displayString;
@property (nonatomic) _Bool requiresRedraw;
@property (nonatomic, readonly) struct UIEdgeInsets textInsets;
@property (nonatomic, readonly) struct UIEdgeInsets borderInsets;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) id value;
@property (nonatomic, readonly) NSString *valueName;
@property (nonatomic) _Bool selected;
@property (retain, nonatomic) NSDictionary *attributes;

+ (id)humanReadableStringFromValueTextAttributedString:(id)arg1;

- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)initWithData:(id)arg1 ofType:(id)arg2;

@end
