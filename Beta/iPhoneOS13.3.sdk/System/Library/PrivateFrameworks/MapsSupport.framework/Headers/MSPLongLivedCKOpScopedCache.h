/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPLongLivedCKOpCache, NSString;

__attribute__((visibility("hidden")))
@interface MSPLongLivedCKOpScopedCache : NSObject

{
    NSString *_typeName;
    MSPLongLivedCKOpCache *_cache;
}

@property (retain, nonatomic) MSPLongLivedCKOpCache *cache;
@property (nonatomic, readonly) NSString *typeName;

- (void)addOperation:(id)arg1;
- (id)initWithType:(id)arg1;
- (void)pruneOperationsToIDs:(id)arg1;
- (_Bool)isAwareOfOperationID:(id)arg1;
- (_Bool)isCurrentOperationID:(id)arg1;
- (id)initWithType:(id)arg1 cache:(id)arg2;
- (void)removeOperation:(id)arg1;
- (_Bool)hasOperationID:(id)arg1;

@end
