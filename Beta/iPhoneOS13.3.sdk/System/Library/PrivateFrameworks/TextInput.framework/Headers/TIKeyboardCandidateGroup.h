/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet, NSString;

@interface TIKeyboardCandidateGroup : NSObject

{
    NSString *_title;
    NSOrderedSet *_candidates;
}

@property (copy) NSString *title;
@property (copy) NSOrderedSet *candidates;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addCandidate:(id)arg1;
- (id)initWithTitle:(id)arg1 candidates:(id)arg2;
- (id)mutableCandidates;
- (_Bool)hasAlternativeText;

@end
