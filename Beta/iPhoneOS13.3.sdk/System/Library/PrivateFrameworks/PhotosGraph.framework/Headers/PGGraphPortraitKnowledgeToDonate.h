/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface PGGraphPortraitKnowledgeToDonate : NSObject

{
    NSDictionary *_topics;
    NSArray *_namedEntities;
    NSArray *_locationNamedEntities;
}

@property (nonatomic, readonly) NSDictionary *topics;
@property (nonatomic, readonly) NSArray *namedEntities;
@property (nonatomic, readonly) NSArray *locationNamedEntities;

- (id)initWithTopics:(id)arg1 namedEntities:(id)arg2 locationNamedEntities:(id)arg3;

@end
