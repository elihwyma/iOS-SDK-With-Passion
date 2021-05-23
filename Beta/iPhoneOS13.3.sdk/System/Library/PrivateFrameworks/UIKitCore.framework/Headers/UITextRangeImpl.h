/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextRange.h>

@class DOMRange;

__attribute__((visibility("hidden")))
@interface UITextRangeImpl : UITextRange

{
    DOMRange *_domRange;
    long long _affinityIfCollapsed;
}

@property (retain, nonatomic) DOMRange *domRange;
@property (nonatomic) long long affinity;

+ (id)wrapDOMRange:(id)arg1 withAffinity:(long long)arg2;
+ (id)wrapDOMRange:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isEmpty;
- (id)start;
- (id)end;
- (void)adjustAffinityOfPosition:(id)arg1 isStart:(_Bool)arg2;

@end
