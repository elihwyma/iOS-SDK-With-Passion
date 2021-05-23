/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ML3OrderingTerm : NSObject

{
    int _direction;
    NSString *_property;
    NSString *_collation;
}

@property (nonatomic, readonly) NSString *property;
@property (nonatomic, readonly) int direction;
@property (nonatomic, readonly) NSString *collation;

+ (_Bool)supportsSecureCoding;
+ (id)orderingTermWithProperty:(id)arg1;
+ (id)orderingTermWithProperty:(id)arg1 direction:(int)arg2;
+ (id)reversedTerms:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)initWithProperty:(id)arg1 direction:(int)arg2;
- (id)initWithProperty:(id)arg1 direction:(int)arg2 collation:(id)arg3;

@end
