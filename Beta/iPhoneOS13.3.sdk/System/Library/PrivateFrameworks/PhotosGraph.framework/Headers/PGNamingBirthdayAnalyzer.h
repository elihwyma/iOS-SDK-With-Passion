/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString, PGGraphNamingProcessor;

@interface PGNamingBirthdayAnalyzer : NSObject

{
    PGGraphNamingProcessor *_processor;
}

@property (weak, nonatomic, readonly) PGGraphNamingProcessor *processor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)name;
- (id)initWithNamingProcessor:(id)arg1;
- (void)runAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)findBirthdayMatchesFromBirthdayByContactIdentifier:(id)arg1 contactIdentifiersWithExplicitBirthday:(id)arg2 graph:(id)arg3 birthdaySceneNodes:(id)arg4 withProgressBlock:(CDUnknownBlockType)arg5;
- (id)birthdaySceneNodesFromGraph:(id)arg1;
- (id)weakBirthdayMomentsFromMomentNodes:(id)arg1 usingSceneNodes:(id)arg2;

@end
