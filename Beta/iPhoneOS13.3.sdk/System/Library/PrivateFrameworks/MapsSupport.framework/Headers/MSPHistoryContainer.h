/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPContainer.h>

@class NSMutableSet;

@interface MSPHistoryContainer : MSPContainer

{
    NSMutableSet *_dependents;
}

+ (id)sharedLocalContainer;
+ (id)sharedRemoteContainer;

- (void)addDependent:(id)arg1;
- (void)removeDependent:(id)arg1;
- (id)queryWithDelegate:(id)arg1;
- (void)_processNewEditedContents:(id)arg1;
- (void)_processNewLoadedContents:(id)arg1;
- (void)_commitEditWithFinalContents:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
