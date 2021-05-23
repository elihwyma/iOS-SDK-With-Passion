/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSFileProviderProxy, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSFileAccessNode : NSObject

{
    NSFileAccessNode *_parent;
    NSString *_name;
    NSString *_normalizedName;
    NSFileAccessNode *_symbolicLinkDestination;
    unsigned long long _symbolicLinkReferenceCount;
    NSMutableDictionary *_childrenByNormalizedName;
    id _presenterOrPresenters;
    NSFileProviderProxy *_provider;
    id _accessClaimOrClaims;
    _Bool _isArbitrationBoundary;
    _Bool _isFilePackageIsFigured;
    _Bool _isFilePackage;
    _Bool _symbolicLinkIsFirmlink;
    NSString *_lastRequestedChildName;
    NSFileAccessNode *_lastRequestedChild;
    id _progressPublisherOrPublishers;
    id _progressSubscriberOrSubscribers;
}

- (void)dealloc;
- (id)description;
- (id)parent;
- (void)forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)removeProgressPublisher:(id)arg1;
- (void)addProgressPublisher:(id)arg1;
- (void)removeProgressSubscriber:(id)arg1;
- (void)addProgressSubscriber:(id)arg1;
- (id)descendantForFileURL:(id)arg1;
- (id)itemProvider;
- (void)removeSelfIfUseless;
- (void)forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (id)url;
- (id)standardizedURL;
- (id)initWithParent:(id)arg1 name:(id)arg2 normalizedName:(id)arg3;
- (void)setSymbolicLinkDestination:(id)arg1;
- (id)pathToDescendantForFileURL:(id)arg1 componentRange:(struct _NSRange *)arg2;
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange)arg2 create:(_Bool)arg3;
- (void)forEachPresenterOfContainingItemPerformProcedure:(CDUnknownBlockType)arg1;
- (id)pathFromAncestor:(id)arg1;
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange)arg2 forAddingLeafNode:(id)arg3 create:(_Bool)arg4;
- (void)forEachProgressPublisherOfItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)setParent:(id)arg1 name:(id)arg2;
- (void)forEachPresenterOfItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (id)urlOfSubitemAtPath:(id)arg1 plusPath:(id)arg2;
- (void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachProgressThingOfItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachPresenterOfItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)setArbitrationBoundary;
- (id)sensitiveDescription;
- (void)forEachReactorToItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (id)subarbiterDescription;
- (id)sensitiveSubarbiterDescription;
- (void)forEachPresenterOfItemOrContainingItemPerformProcedure:(CDUnknownBlockType)arg1;
- (_Bool)itemIsItemAtLocation:(id)arg1;
- (_Bool)itemIsInItemAtLocation:(id)arg1;
- (void)forEachPresenterOfContainingFilePackagePerformProcedure:(CDUnknownBlockType)arg1;
- (_Bool)itemIsFilePackage;
- (void)forEachPresenterOfContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachRelevantAccessClaimPerformProcedure:(CDUnknownBlockType)arg1;
- (_Bool)itemIsSubarbitrable;
- (void)addAccessClaim:(id)arg1;
- (void)forEachRelevantAccessClaimForEvaluatingAgainstClaim:(id)arg1 performProcedure:(CDUnknownBlockType)arg2;
- (void)removeAccessClaim:(id)arg1;
- (void)_setLinkDestination:(id)arg1;
- (void)removeChildForNormalizedName:(id)arg1;
- (id)normalizationOfChildName:(id)arg1;
- (void)setChild:(id)arg1 forName:(id)arg2 normalizedName:(id)arg3;
- (id)childForRange:(struct _NSRange)arg1 ofPath:(id)arg2;
- (void)forEachDescendantPerformProcedure:(CDUnknownBlockType)arg1;
- (id)biggestFilePackageLocation;
- (void)forEachAccessClaimOnItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)_forEachRelevantAccessClaimExcludingClaimsFromSuperarbiter:(_Bool)arg1 performProcedure:(CDUnknownBlockType)arg2;
- (id)pathExceptPrivate;
- (void)forEachProgressSubscriberOfItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)assertLive;
- (_Bool)_mayContainCriticalDebuggingInformationExcludingReactors:(_Bool)arg1;
- (id)_childrenExcludingExcessNodes:(_Bool)arg1 excludingReactors:(_Bool)arg2;
- (id)descriptionWithIndenting:(id)arg1 excludingExcessNodes:(_Bool)arg2 excludingReactors:(_Bool)arg3;
- (void)setFirmlinkDestination:(id)arg1;
- (void)addPresenter:(id)arg1;
- (void)removePresenter:(id)arg1;
- (_Bool)setProvider:(id)arg1;
- (void)removeProvider:(id)arg1;
- (void)assertDead;
- (void)assertDescendantsLive;

@end
