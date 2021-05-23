/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@interface GKListNode : NSObject

{
    id _value;
    GKListNode *_prevNode;
    GKListNode *_nextNode;
}

@property (nonatomic) GKListNode *nextNode;
@property (nonatomic) GKListNode *prevNode;
@property (retain, nonatomic) id value;

- (void)dealloc;
- (id)description;
- (id)initWithValue:(id)arg1;

@end
