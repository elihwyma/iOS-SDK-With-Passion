/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaPredicate.h>

@class NSString;

@interface MPMediaPersistentIDsPredicate : MPMediaPredicate

{
    long long *_persistentIDs;
    _Bool _shouldContain;
    unsigned long long _count;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) const long long *persistentIDs;
@property (nonatomic, readonly) _Bool shouldContain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithPersistentIDs:(const long long *)arg1 count:(unsigned long long)arg2 shouldContain:(_Bool)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
- (id)_ML3PredicateForEntityClass:(Class)arg1;

@end
