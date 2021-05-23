/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSNumber, WDAContent, WDDocument, WDText;

__attribute__((visibility("hidden")))
@interface WDATextBox : NSObject

{
    WDText *mText;
    unsigned long long mNextTextBoxId;
    _Bool mOle;
    _Bool _isMultiColumn;
    WDDocument *mDocument;
    WDAContent *mParent;
    NSNumber *_flowSequence;
    NSNumber *_flowId;
}

@property (retain) NSNumber *flowSequence;
@property (retain) NSNumber *flowId;
@property _Bool isMultiColumn;
@property (weak) WDDocument *document;
@property (weak) WDAContent *parent;

- (id)init;
- (id)description;
- (id)text;
- (void)setText:(id)arg1;
- (unsigned long long)nextTextBoxId;
- (void)setOle:(_Bool)arg1;
- (_Bool)isOle;
- (void)setNextTextBoxId:(unsigned long long)arg1;

@end
