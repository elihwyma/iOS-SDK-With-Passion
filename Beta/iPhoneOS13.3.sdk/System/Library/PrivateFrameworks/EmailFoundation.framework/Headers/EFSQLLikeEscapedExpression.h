/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

#import <EmailFoundation/Swift-Protocol.h>

@class NSString;

@interface EFSQLLikeEscapedExpression : NSObject <Swift>

{
    unsigned short _escapeCharacter;
    NSString *_value;
    unsigned long long _pattern;
}

@property (nonatomic, readonly) NSString *value;
@property (nonatomic, readonly) unsigned short escapeCharacter;
@property (nonatomic, readonly) unsigned long long pattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 pattern:(unsigned long long)arg2;
- (id)initWithValue:(id)arg1 pattern:(unsigned long long)arg2 escapeCharacter:(unsigned short)arg3;
- (id)_stringForPattern:(unsigned long long)arg1 literal:(id)arg2;

@end
