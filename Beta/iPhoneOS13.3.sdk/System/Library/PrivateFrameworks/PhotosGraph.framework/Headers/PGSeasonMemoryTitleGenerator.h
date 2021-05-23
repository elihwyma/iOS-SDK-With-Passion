/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGTitleGenerator.h>

@class NSString;

@interface PGSeasonMemoryTitleGenerator : PGTitleGenerator

{
    NSString *_season;
    unsigned long long _category;
}

@property (retain, nonatomic) NSString *season;
@property (nonatomic) unsigned long long category;

- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithMomentNodes:(id)arg1 seasonName:(id)arg2 category:(unsigned long long)arg3;

@end
