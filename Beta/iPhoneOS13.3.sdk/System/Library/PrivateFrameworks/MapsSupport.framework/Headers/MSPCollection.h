/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPCollectionStorage.h>

#import <MapsSupport/Swift-Protocol.h>

@class MSPCollectionItemReplica, NSArray, NSLock, NSString, NSUUID;

@interface MSPCollection : MSPCollectionStorage <Swift>

{
    NSLock *_lock;
    NSUUID *_storageIdentifier;
    NSArray *_items;
    MSPCollectionItemReplica *_itemReplica;
}

@property (retain, nonatomic) MSPCollectionItemReplica *itemReplica;
@property (retain, nonatomic) NSArray *itemIdentifiers;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic, readonly) _Bool isFavoritesCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)removeItems:(id)arg1;
- (id)storageIdentifier;
- (id)initWithData:(id)arg1 storageIdentifier:(id)arg2;
- (void)mergeFromCollection:(id)arg1 isUserVisibleChange:(out _Bool *)arg2;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)copyIfValidWithError:(out id *)arg1;
- (void)_noteWillMutate;
- (void)setCollectionDescription:(id)arg1;

@end
