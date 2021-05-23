/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGTitleGenerator.h>

@interface PGTripMemoryTitleGenerator : PGTitleGenerator

{
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long type;

- (id)_typeString;
- (id)_locationTitle;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithMomentNodes:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithHighlightNode:(id)arg1;
- (id)_timeTitleForTrip;
- (id)_timeTitleForWeekend;
- (id)_timeTitleForTripAndWeekend;
- (_Bool)_triggerDefaultTitleGenerationIfNil;

@end
