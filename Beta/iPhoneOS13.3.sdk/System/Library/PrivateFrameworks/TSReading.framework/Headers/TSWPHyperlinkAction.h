/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSWPTwoPartAction.h>

@class TSDRep, TSWPHyperlinkField;

@protocol TSWPHyperlinkHostRepProtocol;

@interface TSWPHyperlinkAction : TSWPTwoPartAction

{
    TSWPHyperlinkField *_hyperlinkField;
    TSDRep<TSWPHyperlinkHostRepProtocol> *_hyperlinkRep;
}

+ (id)hyperlinkActionWithHyperlink:(id)arg1 inRep:(id)arg2 action:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (id)initWithHyperlink:(id)arg1 inRep:(id)arg2 action:(CDUnknownBlockType)arg3;

@end
