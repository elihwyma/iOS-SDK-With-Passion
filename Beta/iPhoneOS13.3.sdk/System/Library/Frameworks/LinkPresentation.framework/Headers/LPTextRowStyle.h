/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPTextViewStyle;

__attribute__((visibility("hidden")))
@interface LPTextRowStyle : NSObject

{
    LPTextViewStyle *_leading;
    LPTextViewStyle *_trailing;
    long long _balancingMode;
}

@property (nonatomic, readonly) LPTextViewStyle *leading;
@property (nonatomic, readonly) LPTextViewStyle *trailing;
@property (nonatomic) long long balancingMode;

- (id)init;
- (id)left;
- (id)right;
- (void)applyToAllTextViewStyles:(CDUnknownBlockType)arg1;

@end
