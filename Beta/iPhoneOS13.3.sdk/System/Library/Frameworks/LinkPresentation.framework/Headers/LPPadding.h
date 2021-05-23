/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPPointUnit;

__attribute__((visibility("hidden")))
@interface LPPadding : NSObject

{
    LPPointUnit *_top;
    LPPointUnit *_leading;
    LPPointUnit *_bottom;
    LPPointUnit *_trailing;
}

@property (retain, nonatomic) LPPointUnit *top;
@property (retain, nonatomic) LPPointUnit *leading;
@property (retain, nonatomic) LPPointUnit *bottom;
@property (retain, nonatomic) LPPointUnit *trailing;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_lp_CSSText;
- (struct UIEdgeInsets)asInsetsForLTR:(_Bool)arg1;

@end
