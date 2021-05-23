/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableDictionary, NSNumber, PKCatalogGroup;

@protocol PKGroupDelegate;

@interface PKGroup : NSObject

{
    PKCatalogGroup *_catalogGroup;
    NSMutableDictionary *_passesByUniqueID;
    _Bool _local;
    id <PKGroupDelegate> _delegate;
    unsigned long long _frontmostPassIndex;
}

@property (nonatomic, getter=isLocal) _Bool local;
@property (weak, nonatomic) id <PKGroupDelegate> delegate;
@property (nonatomic) unsigned long long frontmostPassIndex;
@property (nonatomic, readonly) NSNumber *groupID;

- (id)description;
- (unsigned long long)passCount;
- (id)passWithUniqueID:(id)arg1;
- (id)passes;
- (void)_updatePass:(id)arg1 notify:(_Bool)arg2;
- (void)_moveUniqueID:(id)arg1 toIndex:(unsigned long long)arg2 notify:(_Bool)arg3;
- (void)_insertPass:(id)arg1 atIndex:(unsigned long long)arg2 notify:(_Bool)arg3;
- (void)_removeUniqueID:(id)arg1 notify:(_Bool)arg2;
- (unsigned long long)_indexOfUniqueID:(id)arg1;
- (id)passAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForPassUniqueID:(id)arg1;
- (id)initWithCatalogGroup:(id)arg1 passes:(id)arg2;
- (void)updateWithCatalogGroup:(id)arg1 passes:(id)arg2 notify:(_Bool)arg3;
- (id)copyCatalogGroup;
- (void)handleUserPassDelete:(id)arg1;
- (_Bool)containsPasses;
- (_Bool)containsOnlyUniqueID:(id)arg1;
- (void)enumerateUniqueIDsWithHandler:(CDUnknownBlockType)arg1;

@end
