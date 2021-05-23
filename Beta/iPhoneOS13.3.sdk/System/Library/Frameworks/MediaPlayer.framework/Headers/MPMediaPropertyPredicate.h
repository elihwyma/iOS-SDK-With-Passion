/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaPredicate.h>

@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate

{
    NSString *_property;
    id _value;
    long long _comparisonType;
}

@property (copy, nonatomic) NSString *property;
@property (copy, nonatomic) id value;
@property (nonatomic) long long comparisonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;
- (id)descriptionOfValue:(id)arg1 forProperty:(id)arg2;
- (id)_ML3PredicateForML3EntityProperty:(id)arg1;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;

@end
