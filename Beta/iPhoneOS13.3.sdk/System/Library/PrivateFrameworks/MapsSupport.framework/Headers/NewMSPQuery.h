/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPContainer, NSArray, NSLock, NSString;

@protocol MSPQueryDelegate, OS_dispatch_queue;

@interface NewMSPQuery : NSObject

{
    unsigned long long _contentVersion;
    _Bool _isReady;
    MSPContainer *_container;
    NSArray *_cachedContents;
    CDUnknownBlockType _filterBlock;
    NewMSPQuery *_parentQuery;
    NSLock *_lock;
    id <MSPQueryDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property (retain, nonatomic) NSArray *cachedContents;
@property (copy, nonatomic) CDUnknownBlockType filterBlock;
@property (retain, nonatomic) NewMSPQuery *parentQuery;
@property (retain, nonatomic) NSLock *lock;
@property (weak, nonatomic) id <MSPQueryDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property _Bool isReady;
@property (nonatomic, readonly) MSPContainer *container;
@property (readonly) NSArray *contents;
@property (readonly) unsigned long long contentVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_notifyDelegate:(CDUnknownBlockType)arg1;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (void)containerDidEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2;
- (id)initWithContainer:(id)arg1 delegate:(id)arg2 filteredWithBlock:(CDUnknownBlockType)arg3;
- (id)initWithParentQuery:(id)arg1 container:(id)arg2 delegate:(id)arg3 filteredWithBlock:(CDUnknownBlockType)arg4;
- (void)processContents;
- (void)processContentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)processContentsUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryContentsDidLoad:(id)arg1 contentsVersion:(unsigned long long)arg2;
- (void)queryContentsDidChange:(id)arg1 contentsVersion:(unsigned long long)arg2;
- (void)addOrUpdateObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isObject:(id)arg1 equalTo:(id)arg2;
- (void)removeObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)moveObject:(id)arg1 toIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithContainer:(id)arg1 delegate:(id)arg2;
- (id)subQueryFilteredWithBlock:(CDUnknownBlockType)arg1;
- (void)fetchContentsWithHandler:(CDUnknownBlockType)arg1;
- (void)setContents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addOrUpdateObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)moveObject:(id)arg1 beforeObject:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveObject:(id)arg1 afterObject:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveObjectToFront:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)moveObjectToBack:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
