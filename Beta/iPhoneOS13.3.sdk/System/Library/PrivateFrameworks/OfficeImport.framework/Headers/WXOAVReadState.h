/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OAVReadState.h>

@class NSMutableDictionary, WDParagraph, WXReadState;

__attribute__((visibility("hidden")))
@interface WXOAVReadState : OAVReadState

{
    WXReadState *mWxState;
    WDParagraph *mParagraph;
    NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;
}

- (id)currentParagraph;
- (void)setCurrentParagraph:(id)arg1;
- (id)initWithWXReadState:(id)arg1;
- (id)wxReadState;
- (id)nextVmlShapeIdToTextBoxMap;

@end
