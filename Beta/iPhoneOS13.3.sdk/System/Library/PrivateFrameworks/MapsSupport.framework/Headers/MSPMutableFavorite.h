/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

#import <MapsSupport/Swift-Protocol.h>

@class MSPBookmarkStorage, NSString, NSUUID;

@interface MSPMutableFavorite : NSObject <Swift>

{
    _Bool _immutable;
    NSUUID *_storageIdentifier;
    MSPBookmarkStorage *_bookmarkStorage;
}

@property (nonatomic, readonly, getter=_isImmutable) _Bool immutable;
@property (nonatomic, readonly) MSPBookmarkStorage *bookmarkStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *storageIdentifier;

+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (id)mutableFavoriteForBookmarkStorage:(id)arg1;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)debugTitle;
- (_Bool)isUserVisibleDuplicateOfFavorite:(id)arg1;
- (void)ifPlace:(CDUnknownBlockType)arg1 ifRoute:(CDUnknownBlockType)arg2 ifRegion:(CDUnknownBlockType)arg3 ifTransitLine:(CDUnknownBlockType)arg4;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)copyIfValidWithError:(out id *)arg1;
- (void)_noteWillMutate;
- (void)_markImmutable;
- (id)abridgedBookmarkStorageForSpotlightStorage;
- (id)initWithBookmarkStorage:(id)arg1;
- (void)ifMutablePlace:(CDUnknownBlockType)arg1 ifMutableRoute:(CDUnknownBlockType)arg2 ifMutableRegion:(CDUnknownBlockType)arg3 ifMutableTransitLine:(CDUnknownBlockType)arg4;
- (id)persisterOnlyBookmarkStorage;

@end
