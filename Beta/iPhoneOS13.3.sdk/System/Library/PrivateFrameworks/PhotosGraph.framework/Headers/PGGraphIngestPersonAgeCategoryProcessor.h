/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface PGGraphIngestPersonAgeCategoryProcessor : NSObject

{
    NSDictionary *_confidenceThresholdByChildSceneIdentifier;
    NSDictionary *_confidenceThresholdByAdultSceneIdentifier;
}

@property (nonatomic, readonly) NSDictionary *confidenceThresholdByChildSceneIdentifier;
@property (nonatomic, readonly) NSDictionary *confidenceThresholdByAdultSceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)shouldRunWithGraphUpdate:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)processPersonAgeCategoryForPersonNodes:(id)arg1 graph:(id)arg2 withProgressBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)_ageCategoryForPersonNode:(id)arg1 graph:(id)arg2;
- (unsigned long long)_ageCategoryFromPHFaceAgeType:(unsigned short)arg1;
- (unsigned long long)_ageCategoryFromBirthdayDateForPersonNode:(id)arg1;
- (unsigned long long)_ageCategoryFromAssetSamplingForPersonNode:(id)arg1 graph:(id)arg2;

@end
