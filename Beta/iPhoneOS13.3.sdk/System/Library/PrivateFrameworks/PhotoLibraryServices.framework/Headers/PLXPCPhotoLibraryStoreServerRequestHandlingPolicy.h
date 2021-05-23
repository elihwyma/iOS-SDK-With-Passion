/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <CoreData/NSXPCStoreServerRequestHandlingPolicy.h>

@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy

- (_Bool)shouldAcceptConnectionsFromClientWithContext:(id)arg1;
- (_Bool)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1;
- (id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (id)restrictingPullChangeHistoryPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (id)_entityNamesAllowedByRestrictedDataEntitlements:(id)arg1;
- (id)_restrictedEntityNamesAllowedForContext:(id)arg1;

@end
