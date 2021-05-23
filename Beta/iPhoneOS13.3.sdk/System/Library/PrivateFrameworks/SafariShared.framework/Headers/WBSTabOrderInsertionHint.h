/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@protocol WBSOrderedTab;

@interface WBSTabOrderInsertionHint : NSObject

{
    id <WBSOrderedTab> _tabToInsertAfter;
    unsigned long long _insertionIndex;
    unsigned long long _relationType;
}

@property (nonatomic, readonly) id <WBSOrderedTab> tabToInsertAfter;
@property (nonatomic, readonly) unsigned long long insertionIndex;
@property (nonatomic, readonly) unsigned long long relationType;

- (id)initWithTabToInsertAfter:(id)arg1 insertionIndex:(unsigned long long)arg2 relation:(unsigned long long)arg3;
- (id)initWithTabToInsertAfter:(id)arg1 relation:(unsigned long long)arg2;

@end
