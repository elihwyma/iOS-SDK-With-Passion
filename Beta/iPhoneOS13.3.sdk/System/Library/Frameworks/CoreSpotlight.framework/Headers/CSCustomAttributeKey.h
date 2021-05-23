/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CSCustomAttributeKey : NSObject

{
    _Bool _searchable;
    _Bool _searchableByDefault;
    _Bool _unique;
    _Bool _multiValued;
    NSString *_keyName;
}

@property (retain) NSString *keyName;
@property (getter=isUnique) _Bool unique;
@property (getter=isSearchable) _Bool searchable;
@property (getter=isSearchableByDefault) _Bool searchableByDefault;
@property (getter=isMultiValued) _Bool multiValued;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_keyNameIsValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyName:(id)arg1;
- (id)initWithKeyName:(id)arg1 searchable:(_Bool)arg2 searchableByDefault:(_Bool)arg3 unique:(_Bool)arg4 multiValued:(_Bool)arg5;

@end
