/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaPredicate.h>

@class NSString;

@interface MPMediaConditionalPredicate : MPMediaPredicate

{
    MPMediaPredicate *_conditionPredicate;
    MPMediaPredicate *_thenPredicate;
    MPMediaPredicate *_elsePredicate;
}

@property (copy, nonatomic, readonly) MPMediaPredicate *conditionPredicate;
@property (copy, nonatomic, readonly) MPMediaPredicate *thenPredicate;
@property (copy, nonatomic, readonly) MPMediaPredicate *elsePredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;
- (id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
- (id)_ML3PredicateForEntityTypeSelector:(SEL)arg1;

@end
