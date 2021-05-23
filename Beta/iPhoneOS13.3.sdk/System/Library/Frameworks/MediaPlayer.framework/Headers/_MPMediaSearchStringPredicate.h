/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaPredicate.h>

@class NSSet, NSString;

@interface _MPMediaSearchStringPredicate : MPMediaPredicate

{
    NSString *_searchString;
    NSSet *_properties;
}

@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSSet *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithSearchString:(id)arg1 forProperties:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
- (id)_ML3PredicateForEntityClass:(Class)arg1;

@end
