/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <CALayerHost.h>

@interface FigBaseCALayerHost : CALayerHost

{
    _Bool _preventsChangesToSublayerHierarchy;
}

@property (nonatomic) _Bool preventsChangesToSublayerHierarchy;

+ (id)defaultActionForKey:(id)arg1;

- (id)init;
- (void)removeFromSuperlayer;
- (void)addSublayer:(id)arg1;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (id)actionForKey:(id)arg1;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)setSublayers:(id)arg1;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;

@end
