/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSCharacterSet, NSString;

@interface TICharacterSetDescription : NSObject

{
    NSCharacterSet *_characterSet;
    _Bool _inverted;
    long long _baseIdentifier;
    NSString *_charactersAddedToBase;
    NSString *_charactersRemovedFromBase;
}

@property (nonatomic, readonly) long long baseIdentifier;
@property (copy, nonatomic) NSString *charactersAddedToBase;
@property (copy, nonatomic) NSString *charactersRemovedFromBase;
@property (nonatomic, readonly) _Bool inverted;
@property (nonatomic, readonly) NSCharacterSet *characterSet;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithBaseCharacterSet:(long long)arg1;
- (id)initWithCharactersInString:(id)arg1;
- (id)initWithBase:(long long)arg1 additionalCharacters:(id)arg2 removedCharacters:(id)arg3 inverted:(_Bool)arg4;
- (id)invertedSetDescription;
- (id)newCharacterSetFromDescription;
- (void)clearCachedCharacterSet;

@end
