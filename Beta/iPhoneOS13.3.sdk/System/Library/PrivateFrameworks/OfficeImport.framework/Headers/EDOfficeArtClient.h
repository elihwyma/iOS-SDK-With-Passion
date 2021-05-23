/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDAnchor, EDComment, EDSheet, EDTextBox, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface EDOfficeArtClient : NSObject

{
    EDSheet *mSheet;
    id mClientState;
    EDAnchor *mAnchor;
    EDTextBox *mTextBox;
    EDComment *mComment;
    NSMutableDictionary *mTableModels;
    struct CGRect mBounds;
    _Bool mIsBoundsSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (id)comment;
- (id)anchor;
- (_Bool)hasText;
- (void)setAnchor:(id)arg1;
- (void)setComment:(id)arg1;
- (_Bool)hasBounds;
- (void)setClientState:(id)arg1;
- (id)clientState;
- (id)sheet;
- (id)textBox;
- (_Bool)areBoundsSet;
- (void)setSheet:(id)arg1;
- (id)tableModels;
- (void)setTableModels:(id)arg1;
- (void)setTextBox:(id)arg1;

@end
