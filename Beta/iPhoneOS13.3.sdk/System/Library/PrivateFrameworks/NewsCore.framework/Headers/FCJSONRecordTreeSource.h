/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol FCContentContext;

@interface FCJSONRecordTreeSource : NSObject

{
    id <FCContentContext> _context;
    NSArray *_jsonRecordSources;
}

@property (retain, nonatomic) id <FCContentContext> context;
@property (copy, nonatomic) NSArray *jsonRecordSources;

- (void)fetchRecordTreeWithRootIDs:(id)arg1 branchKeysByRecordType:(id)arg2 cachePolicy:(id)arg3 edgeCacheHint:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchRecordTreeWithRootIDs:(id)arg1 branchKeysByRecordType:(id)arg2 cachePolicy:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithContext:(id)arg1 jsonRecordSources:(id)arg2;

@end
