/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGGraphIngestPersonGenderProcessor : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)shouldRunWithGraphUpdate:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)processPersonGenderForPersonNodes:(id)arg1 graph:(id)arg2 withProgressBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)_genderForPersonNode:(id)arg1 graph:(id)arg2;

@end
