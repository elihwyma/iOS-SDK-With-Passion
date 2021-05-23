/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDReference, EDString;

__attribute__((visibility("hidden")))
@interface EDHyperlink : NSObject

{
    EDString *mPath;
    EDString *mDosPath;
    EDString *mDescriptionText;
    EDString *mTextMark;
    EDString *mToolTip;
    EDReference *mReference;
    int mType;
}

+ (id)hyperlink;

- (id)description;
- (int)type;
- (void)setType:(int)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)reference;
- (id)descriptionText;
- (void)setDescriptionText:(id)arg1;
- (void)setReference:(id)arg1;
- (id)toolTip;
- (void)setDosPath:(id)arg1;
- (void)setTextMark:(id)arg1;
- (void)setToolTip:(id)arg1;
- (id)dosPath;
- (id)textMark;

@end
