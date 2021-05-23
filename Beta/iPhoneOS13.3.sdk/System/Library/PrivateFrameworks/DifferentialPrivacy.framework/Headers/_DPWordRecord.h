/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSNumber, NSString;

@interface _DPWordRecord : NSObject

{
    NSNumber *_wordPosition;
    NSString *_word;
}

@property (nonatomic, readonly) NSNumber *wordPosition;
@property (copy, nonatomic, readonly) NSString *word;

+ (_Bool)supportsSecureCoding;
+ (id)word:(id)arg1 atPosition:(id)arg2;
+ (id)sequenceAndFragmentsFrom:(id)arg1 fragmentLimit:(unsigned long long)arg2 fragmentWidth:(unsigned long long)arg3 puzzlePieceCount:(unsigned long long)arg4;
+ (id)bogusCharacter;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sequenceWithoutPadding;
- (id)initWithWord:(id)arg1 atPosition:(id)arg2;
- (_Bool)isEqualToWordRecord:(id)arg1;

@end
