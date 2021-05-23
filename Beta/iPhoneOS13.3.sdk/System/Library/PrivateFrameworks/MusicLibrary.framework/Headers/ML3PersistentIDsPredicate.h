/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Predicate.h>

@class NSArray;

@interface ML3PersistentIDsPredicate : ML3Predicate

{
    NSArray *_persistentIDs;
    _Bool _shouldContain;
}

@property (nonatomic, readonly) _Bool shouldContain;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithPersistentIDs:(const long long *)arg1 count:(unsigned long long)arg2 shouldContain:(_Bool)arg3;
+ (id)predicateWithPersistentIDs:(id)arg1 shouldContain:(_Bool)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)databaseStatementParameters;
- (id)initWithPersistentIDs:(id)arg1 shouldContain:(_Bool)arg2;

@end
