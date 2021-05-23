/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextRange.h>

#import <UIKitCore/Swift-Protocol.h>

@class UITextPosition, _UITextKitTextPosition;

__attribute__((visibility("hidden")))
@interface _UITextKitTextRange : UITextRange <Swift>

{
    _UITextKitTextPosition *_start;
    _UITextKitTextPosition *_end;
}

@property (retain, nonatomic) UITextPosition *start;
@property (retain, nonatomic) UITextPosition *end;
@property (nonatomic, readonly) long long affinity;

+ (id)rangeWithRange:(struct _NSRange)arg1;
+ (id)rangeWithRange:(struct _NSRange)arg1 affinity:(long long)arg2;
+ (id)rangeWithStart:(id)arg1 end:(id)arg2;
+ (id)defaultRange;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (struct _NSRange)asRange;

@end
