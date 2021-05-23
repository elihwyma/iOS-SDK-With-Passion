/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface REUpNextSetNode : NSObject

{
    id _item;
    REUpNextSetNode *_parent;
    NSMutableArray *_children;
    unsigned long long _rank;
}

@property (nonatomic, readonly) id item;
@property (retain, nonatomic) REUpNextSetNode *parent;
@property (retain, nonatomic) NSMutableArray *children;
@property (nonatomic) unsigned long long rank;

- (void)remove;
- (id)rootNode;
- (id)initWithItem:(id)arg1;
- (void)join:(id)arg1;

@end
