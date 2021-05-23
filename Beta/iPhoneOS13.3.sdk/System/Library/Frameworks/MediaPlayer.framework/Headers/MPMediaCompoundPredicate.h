/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaPredicate.h>

@class NSArray, NSString;

@interface MPMediaCompoundPredicate : MPMediaPredicate

{
    NSArray *_predicates;
}

@property (copy, nonatomic, readonly) NSArray *predicates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)predicateMatchingPredicates:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicates:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
- (id)_ML3PredicateForEntityTypeSelector:(SEL)arg1;

@end
