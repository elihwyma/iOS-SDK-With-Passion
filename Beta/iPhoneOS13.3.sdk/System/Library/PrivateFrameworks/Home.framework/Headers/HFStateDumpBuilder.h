/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFStateDumpBuilderContext, NSMutableArray;

@interface HFStateDumpBuilder : NSObject

{
    id _object;
    HFStateDumpBuilderContext *_context;
    NSMutableArray *_entries;
}

@property (nonatomic, readonly) NSMutableArray *entries;
@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) HFStateDumpBuilderContext *context;

+ (id)builderWithObject:(id)arg1 context:(id)arg2;
+ (id)_coerceObjectToPropertyList:(id)arg1 options:(unsigned long long)arg2;

- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)appendObject:(id)arg1 withName:(id)arg2;
- (void)appendBool:(_Bool)arg1 withName:(id)arg2 ifEqualTo:(_Bool)arg3;
- (void)appendBool:(_Bool)arg1 withName:(id)arg2;
- (id)buildPropertyListRepresentation;
- (id)buildDescription;
- (void)appendObject:(id)arg1 withName:(id)arg2 options:(unsigned long long)arg3;
- (void)appendObject:(id)arg1 withName:(id)arg2 context:(id)arg3;
- (void)appendObject:(id)arg1 withName:(id)arg2 context:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithObject:(id)arg1 context:(id)arg2;
- (id)_filteredEntries;
- (id)_formattedObjectForEntry:(id)arg1 withRepresentation:(unsigned long long)arg2;
- (id)_formattedObjectForObject:(id)arg1 withRepresentation:(unsigned long long)arg2 context:(id)arg3 options:(unsigned long long)arg4;

@end
