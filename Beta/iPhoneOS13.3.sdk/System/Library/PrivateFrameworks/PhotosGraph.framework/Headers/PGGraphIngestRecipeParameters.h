/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PGGraphIngestRecipeParameters : NSObject

{
    NSArray *_momentsToIngest;
    NSArray *_highligthsToIngest;
    NSArray *_preProcessors;
    NSArray *_postProcessors;
}

@property (retain, nonatomic) NSArray *momentsToIngest;
@property (retain, nonatomic) NSArray *highligthsToIngest;
@property (retain, nonatomic) NSArray *preProcessors;
@property (retain, nonatomic) NSArray *postProcessors;

+ (id)lighweightGraphIngestParameters;

@end
