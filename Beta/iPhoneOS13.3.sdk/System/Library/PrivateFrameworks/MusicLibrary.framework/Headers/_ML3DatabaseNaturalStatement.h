/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _ML3DatabaseNaturalStatement : NSObject

{
    NSString *_sql;
    NSMutableArray *_parameters;
}

@property (retain, nonatomic) NSString *sql;
@property (retain, nonatomic) NSMutableArray *parameters;

+ (id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2;

- (id)init;
- (void)setParameter:(id)arg1 forPosition:(unsigned long long)arg2;

@end
