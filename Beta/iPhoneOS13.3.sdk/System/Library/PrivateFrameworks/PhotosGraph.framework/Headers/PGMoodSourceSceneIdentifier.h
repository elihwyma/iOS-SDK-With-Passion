/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGMoodSourceSceneIdentifier : NSObject

{
    _Bool _isDistributed;
    _Bool _isHighConfidence;
    NSString *_moodIdentifier;
}

@property (retain) NSString *moodIdentifier;
@property _Bool isDistributed;
@property _Bool isHighConfidence;

@end
