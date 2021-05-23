/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDAlignmentInfo, EDProtection, EDString;

__attribute__((visibility("hidden")))
@interface EDTextBox : NSObject

{
    EDString *mText;
    EDAlignmentInfo *mAlignmentInfo;
    EDProtection *mProtection;
}

+ (id)textBox;

- (id)description;
- (id)text;
- (void)setText:(id)arg1;
- (id)protection;
- (void)setProtection:(id)arg1;
- (id)alignmentInfo;
- (void)setAlignmentInfo:(id)arg1;

@end
