/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface REDependencyGraphNode : NSObject

{
    id _item;
    NSHashTable *_connections;
}

@property (nonatomic, readonly) id item;
@property (retain, nonatomic) NSHashTable *connections;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithItem:(id)arg1;

@end
