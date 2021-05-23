/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class MPModelStoreBrowseResponse, NSString, NSURL;

@interface MPModelStoreBrowseSection : MPModelObject

{
    _Bool _containsOnlyEditorialElements;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long sectionType;
@property (copy, nonatomic) NSURL *loadAdditionalContentURL;
@property (nonatomic) _Bool displaysAsGridCellInCarPlay;
@property (nonatomic) long long uniformContentItemType;
@property (nonatomic, getter=isMemberOfChartSet) _Bool memberOfChartSet;
@property (nonatomic, getter=isBrick) _Bool brick;
@property (retain, nonatomic) MPModelStoreBrowseResponse *previouslyRetrievedNestedResponse;
@property (nonatomic) _Bool containsOnlyEditorialElements;

+ (id)__title_KEY;
+ (id)__loadAdditionalContentURL_KEY;
+ (id)__displaysAsGridCellInCarPlay_KEY;
+ (id)__sectionType_KEY;
+ (id)__uniformContentItemType_KEY;
+ (id)__memberOfChartSet_KEY;
+ (id)__brick_KEY;
+ (id)__previouslyRetrievedNestedResponse_KEY;

@end
