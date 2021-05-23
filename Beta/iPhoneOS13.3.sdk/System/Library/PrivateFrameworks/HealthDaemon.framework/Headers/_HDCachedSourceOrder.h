/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _HDCachedSourceOrder : NSObject

{
    _Bool _userOrdered;
    _Bool _isDefaultSourceOrder;
    vector_f9051771 _orderedSources;
    unordered_map_0fc8d213 _sourcesByID;
}

@property (nonatomic) vector_f9051771 orderedSources;
@property (nonatomic) unordered_map_0fc8d213 sourcesByID;
@property (nonatomic, readonly) _Bool userOrdered;
@property (nonatomic, readonly) _Bool isDefaultSourceOrder;
@property (copy, nonatomic, readonly) NSArray *sources;
@property (copy, nonatomic, readonly) NSArray *sourceIDs;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id).cxx_construct;
- (id)initWithSources:(vector_f9051771)arg1 userOrdered:(_Bool)arg2 isDefaultOrder:(_Bool)arg3;

@end
