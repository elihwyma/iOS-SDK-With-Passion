/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface PGBaby : NSObject

{
    NSMutableSet *_momentNodes;
    NSMutableSet *_caretakerNodes;
}

@property (nonatomic, readonly) NSMutableSet *momentNodes;
@property (nonatomic, readonly) NSMutableSet *caretakerNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithMomentNodes:(id)arg1 caretakerNodes:(id)arg2;

@end
