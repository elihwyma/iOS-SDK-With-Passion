/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

#import <PhotoAnalysis/Swift-Protocol.h>

@interface PHASceneTaxonomyClientHandler : NSObject <Swift>

+ (void)initialize;

- (void)sceneNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)searchResultNodesForSceneClassifications:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)searchResultNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)localizedLabelForSceneIdentifier:(unsigned int)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)handleOperation:(id)arg1;
- (id)sceneTaxonomyHash;

@end
