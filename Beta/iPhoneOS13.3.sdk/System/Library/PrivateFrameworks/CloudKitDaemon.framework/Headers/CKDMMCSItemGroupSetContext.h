/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDMMCSItemGroupSet, CKDOperation, NSMutableArray;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDMMCSItemGroupSetContext : NSObject

{
    CKDMMCSItemGroupSet *_itemGroupSet;
    CKDOperation *_operation;
    NSMutableArray *_itemGroupContexts;
    CDUnknownBlockType _itemGroupCompletionBlock;
    CDUnknownBlockType _itemGroupSetCompletionBlock;
    NSObject<OS_dispatch_group> *_itemGroupSetCompletionGroup;
    long long _mmcsOperationType;
}

@property (retain, nonatomic) CKDMMCSItemGroupSet *itemGroupSet;
@property (weak, nonatomic) CKDOperation *operation;
@property (retain, nonatomic) NSMutableArray *itemGroupContexts;
@property (copy, nonatomic) CDUnknownBlockType itemGroupCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType itemGroupSetCompletionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *itemGroupSetCompletionGroup;
@property (nonatomic) long long mmcsOperationType;

- (void)cancel;
- (void)start;
- (id)initWithItemGroupSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addItemGroupContext:(id)arg1;

@end
