/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol NUNode;

@interface NUNode : NSObject

{
    NSMutableArray *_subnodes;
    NSObject<NUNode> *_supernode;
    struct CGRect _frame;
    struct CGRect _bounds;
}

@property (retain, nonatomic) NSMutableArray *subnodes;
@property (weak, nonatomic) NSObject<NUNode> *supernode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct CGRect bounds;

- (id)init;
- (void)addSubnode:(id)arg1;
- (void)removeFromSupernode;
- (void)resolveViewsInView:(id)arg1;

@end
