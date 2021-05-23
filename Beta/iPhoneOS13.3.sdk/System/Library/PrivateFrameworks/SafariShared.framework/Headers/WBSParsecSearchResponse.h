/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, WBSParsecSearchCompletionResultSet;

@interface WBSParsecSearchResponse : NSObject

{
    WBSParsecSearchCompletionResultSet *_bestResultSet;
    double _maxAge;
    unsigned long long _sizeInBytes;
    NSArray *_completionResultSets;
}

@property (nonatomic, readonly) double maxAge;
@property (nonatomic, readonly) unsigned long long sizeInBytes;
@property (nonatomic, readonly) NSArray *completionResultSets;
@property (nonatomic, readonly) WBSParsecSearchCompletionResultSet *bestCompletionResultSet;
@property (nonatomic, readonly) NSArray *statusCodesForCompletionResultSets;

+ (id)searchResponseSchemaWithCache:(id)arg1;

- (id)initWithArray:(id)arg1 responseHeaders:(id)arg2 sizeInBytes:(unsigned long long)arg3 cache:(id)arg4;

@end
