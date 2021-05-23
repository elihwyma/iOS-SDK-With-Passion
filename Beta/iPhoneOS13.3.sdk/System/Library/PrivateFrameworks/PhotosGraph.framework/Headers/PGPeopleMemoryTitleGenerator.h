/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGPeopleMemoryTitleGenerator : PGTitleGenerator

{
    unsigned long long _type;
    NSSet *_personNodes;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSSet *personNodes;

- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 type:(unsigned long long)arg3;
- (id)_titleForPeople;
- (id)_titleForSocialGroup;
- (id)_titleForEarlyMoments;
- (id)_timeTitleForEarlyMoments;
- (_Bool)_person:(id)arg1 isPresentInAnyMomentOfMoments:(id)arg2;
- (id)_birthdayTitleForPeople;
- (id)_timeTitleForPeople;
- (_Bool)_useSplitTimeTitlesIfNeeded;

@end
