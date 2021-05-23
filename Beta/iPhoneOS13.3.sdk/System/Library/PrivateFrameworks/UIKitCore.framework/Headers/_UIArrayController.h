/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSOperationQueue, NSOrderedSet, NSPredicate;

@protocol _UIArrayControllerDelegate;

@interface _UIArrayController : NSObject

{
    _Bool _firstUpdateSent;
    _Bool _invalidated;
    NSArray *_sortDescriptors;
    NSPredicate *_predicate;
    id <_UIArrayControllerDelegate> _delegate;
    NSOperationQueue *_operationQueue;
    NSOrderedSet *_lastSnapshot;
}

@property (weak, nonatomic) id <_UIArrayControllerDelegate> delegate;
@property (copy, nonatomic) NSOrderedSet *lastSnapshot;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (void)dealloc;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1;
- (void)processUpdate:(id)arg1 changedObjects:(id)arg2;
- (_Bool)objectAttributeModified:(id)arg1 newObject:(id)arg2;
- (id)_computeUpdatesFromOld:(id)arg1 toNew:(id)arg2 changedItems:(id)arg3;
- (void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2;

@end
