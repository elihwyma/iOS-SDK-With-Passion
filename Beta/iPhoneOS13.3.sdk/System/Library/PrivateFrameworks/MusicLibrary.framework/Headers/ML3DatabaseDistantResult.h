/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DatabaseResult.h>

@class ML3DatabaseDistantConnection, NSArray, NSDictionary, NSString;

@interface ML3DatabaseDistantResult : ML3DatabaseResult

{
    NSArray *_cachedRows;
    NSDictionary *_cachedColumnNameIndexMap;
    ML3DatabaseDistantConnection *_distantConnection;
    NSString *_sql;
    NSArray *_parameters;
}

@property (nonatomic, readonly) ML3DatabaseDistantConnection *distantConnection;
@property (nonatomic, readonly) NSString *sql;
@property (nonatomic, readonly) NSArray *parameters;

- (id)init;
- (id)description;
- (id)initWithStatement:(id)arg1;
- (void)enumerateRowsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexForColumnName:(id)arg1;
- (id)columnNameIndexMap;
- (id)initWithDistantConnection:(id)arg1 sql:(id)arg2 parameters:(id)arg3;
- (void)_localEnumerateRowsWithBlock:(CDUnknownBlockType)arg1;
- (void)_remoteEnumerateRowsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_fetchRowsIfEmpty;

@end
