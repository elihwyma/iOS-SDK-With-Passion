/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@interface PGPeopleInferencesConveniences : NSObject

+ (_Bool)isValidContact:(id)arg1;
+ (_Bool)signalInRunOptions:(unsigned long long)arg1 signal:(unsigned long long)arg2;
+ (id)momentNodesLinkedToPersonNodes:(id)arg1;
+ (id)personLocalIdentifierByContactIdentifierFromPersonNodes:(id)arg1;
+ (id)personCountedSetFromMomentNodes:(id)arg1 amongPersonNodes:(id)arg2;
+ (id)momentNodesbyAddressNodeFromMomentNodes:(id)arg1;
+ (id)momentsAtWorkForMomentNodes:(id)arg1;
+ (id)momentsAtHomeForMomentNodes:(id)arg1;
+ (id)_momentsAtHomeOrWorkForMomentNodes:(id)arg1 atHome:(_Bool)arg2 atWork:(_Bool)arg3;
+ (id)topPersonLocalIdentifierFor2PersonSocialGroupsInGraph:(id)arg1 personNodes:(id)arg2;
+ (id)possibleUserLocalesFromGraph:(id)arg1;

@end
