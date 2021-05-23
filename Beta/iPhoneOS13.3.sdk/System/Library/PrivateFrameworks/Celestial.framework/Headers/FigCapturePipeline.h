/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWGraph, NSArray, NSMutableArray, NSString;

@interface FigCapturePipeline : NSObject

{
    BWGraph *_graph;
    NSMutableArray *_nodes;
    NSString *_name;
}

@property (nonatomic, readonly) NSArray *nodes;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) BWGraph *graph;

- (void)dealloc;
- (id)initWithGraph:(id)arg1 name:(id)arg2;
- (_Bool)addNode:(id)arg1 error:(id *)arg2;

@end
