/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIPathAction

{
    unsigned long long _syllableCount;
}

@property (nonatomic, readonly) unsigned long long syllableCount;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2;

@end
