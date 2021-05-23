/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaPredicate.h>

@class NSSet, NSString;

@interface MPMediaContainmentPredicate : MPMediaPredicate

{
    NSString *_property;
    NSSet *_values;
}

@property (copy, nonatomic, readonly) NSString *property;
@property (copy, nonatomic, readonly) NSSet *values;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
- (id)_ML3PredicateForEntityClass:(Class)arg1;

@end
