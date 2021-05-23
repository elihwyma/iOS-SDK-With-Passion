/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <TextInput/TIKeyboardOutput.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIInputViewKeyboardOutput : TIKeyboardOutput <Swift>

{
    _Bool _didBeginOutput;
    long long _positionOffset;
}

@property (nonatomic) long long positionOffset;
@property (nonatomic) _Bool didBeginOutput;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAcceptedCandidate:(id)arg1;
- (void)setTextToCommit:(id)arg1;
- (void)setForwardDeletionCount:(unsigned long long)arg1;
- (void)setInsertionTextAfterSelection:(id)arg1;
- (void)setShortcutConversion:(id)arg1;
- (void)setHandwritingStrokesToDelete:(id)arg1;

@end
