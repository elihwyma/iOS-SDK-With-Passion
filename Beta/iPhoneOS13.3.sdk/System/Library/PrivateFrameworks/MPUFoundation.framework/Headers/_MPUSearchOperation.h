/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSOperation.h>

@class MPMediaQuery, MPUSearchDataSource, NSString;

@interface _MPUSearchOperation : NSOperation

{
    long long _entityType;
    MPMediaQuery *_query;
    MPUSearchDataSource *_dataSource;
    NSString *_searchString;
}

@property (weak, nonatomic, readonly) MPUSearchDataSource *dataSource;
@property (copy, nonatomic, readonly) NSString *searchString;

- (id)description;
- (void)main;
- (id)initWithSearchDataSource:(id)arg1 searchString:(id)arg2;
- (void)executeSearch;

@end
