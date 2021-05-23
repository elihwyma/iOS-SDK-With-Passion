/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class _DKQuery;

@interface REDuetQuery : NSObject

{
    CDUnknownBlockType _transformBlock;
    _DKQuery *_query;
}

@property (copy, nonatomic) CDUnknownBlockType transformBlock;
@property (retain, nonatomic) _DKQuery *query;
@property (nonatomic) long long offset;

@end
