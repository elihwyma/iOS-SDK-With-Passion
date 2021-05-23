/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3PropertyPredicate.h>

@interface ML3BitMaskPredicate : ML3PropertyPredicate

{
    long long _mask;
    long long _value;
}

@property (nonatomic) long long mask;
@property (nonatomic) long long value;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)databaseStatementParameters;
- (id)initWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3;

@end
