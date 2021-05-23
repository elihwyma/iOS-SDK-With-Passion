/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSTextStorage;

@interface _NSAttributeRun : NSObject

{
    struct _NSRange _range;
    NSTextStorage *_textStorage;
    NSMutableArray *_attributesArray;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct _NSRange)range;
- (id)initWithTextStorage:(id)arg1 range:(struct _NSRange)arg2;
- (void)restoreAttributesOfTextStorage:(id)arg1;

@end
