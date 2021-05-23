/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechnique.h>

@class NSSet;

@interface ARReplayResultDataTechnique : ARTechnique

{
    NSSet *_resultDataClasses;
    CDUnknownBlockType _retrieveResultsForTimestampBlock;
}

@property (retain, nonatomic) NSSet *resultDataClasses;
@property (copy, nonatomic) CDUnknownBlockType retrieveResultsForTimestampBlock;

- (_Bool)isEqual:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;

@end
