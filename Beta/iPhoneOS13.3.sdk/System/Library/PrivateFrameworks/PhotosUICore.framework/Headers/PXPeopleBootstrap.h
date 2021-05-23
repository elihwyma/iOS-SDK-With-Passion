/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXPeopleBootstrap : NSObject

+ (struct CGSize)preferredBootstrapSize;
+ (void)performBootstrapWithSourcePerson:(id)arg1 context:(id)arg2 synchronous:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_addToPeopleAlbumWithChangeRequest:(id)arg1;
+ (void)_favoritePersonWithChangeRequest:(id)arg1;
+ (void)_unfavoritePersonWithChangeRequest:(id)arg1;
+ (void)_namePerson:(id)arg1 context:(id)arg2 withChangeRequest:(id)arg3;
+ (void)_namePerson:(id)arg1 toString:(id)arg2 withChangeRequest:(id)arg3;
+ (void)_namePerson:(id)arg1 toContact:(id)arg2 withChangeRequest:(id)arg3;
+ (void)_mergePerson:(id)arg1 context:(id)arg2 toPerson:(id)arg3;

@end
