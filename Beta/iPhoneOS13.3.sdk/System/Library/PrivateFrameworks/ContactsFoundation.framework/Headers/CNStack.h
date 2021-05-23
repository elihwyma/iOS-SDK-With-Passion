/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface CNStack : NSObject

{
    NSMutableArray *_objects;
}

@property (nonatomic, readonly) id peek;
@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (void)removeObject:(id)arg1;
- (void)push:(id)arg1;
- (id)pop;
- (void)popAllWithHandler:(CDUnknownBlockType)arg1;
- (id)popAll;
- (void)popWithHandler:(CDUnknownBlockType)arg1;

@end
