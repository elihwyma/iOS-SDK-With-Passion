/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface ML3DatabaseNaturalStatement : NSObject

{
    NSString *_sql;
    NSMutableArray *_parameters;
}

@property (copy, nonatomic) NSString *sql;
@property (retain, nonatomic) NSMutableArray *parameters;

+ (_Bool)supportsSecureCoding;
+ (id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setParameter:(id)arg1 forPosition:(unsigned long long)arg2;
- (id)initWithSQL:(id)arg1 parameters:(id)arg2;

@end
