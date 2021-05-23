/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSConcreteMutableAttributedString.h>

@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString

{
    id _delegate;
}

+ (Class)_mutableStringClass;

- (void)beginEditing;
- (void)endEditing;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;

@end
