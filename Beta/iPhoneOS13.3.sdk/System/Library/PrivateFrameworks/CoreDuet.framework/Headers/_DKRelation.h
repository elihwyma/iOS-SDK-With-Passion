/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKObject.h>

@class NSString;

@interface _DKRelation : _DKObject

{
    NSString *_verbPhrase;
    _DKObject *_subject;
    _DKObject *_object;
}

@property (readonly) NSString *verbPhrase;
@property (readonly) _DKObject *subject;
@property (readonly) _DKObject *object;

+ (_Bool)supportsSecureCoding;
+ (id)entityName;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 cache:(id)arg3;
+ (id)relationWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringValue;
- (_Bool)copyToManagedObject:(id)arg1;
- (id)initWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3;

@end
