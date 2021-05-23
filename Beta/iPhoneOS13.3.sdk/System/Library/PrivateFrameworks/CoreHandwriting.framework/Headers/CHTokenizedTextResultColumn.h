/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet;

@interface CHTokenizedTextResultColumn : NSObject

{
    NSArray *_tokenRows;
}

@property (copy, nonatomic, readonly) NSArray *tokenRows;
@property (nonatomic, readonly) NSIndexSet *strokeIndexes;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokenRows:(id)arg1;
- (_Bool)isEqualToTokenizedTextResultColumn:(id)arg1;
- (long long)indexOfEquivalentTokenRow:(id)arg1 tokenRange:(struct _NSRange)arg2;

@end
