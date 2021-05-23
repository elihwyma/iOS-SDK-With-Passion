/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class MPSectionedCollection, NSArray, NSDate, NSString, NSURL;

@interface MPModelForYouRecommendationGroup : MPModelObject

{
    NSURL *_refreshURL;
    _Bool _groupRecommendation;
}

@property (nonatomic) unsigned long long groupType;
@property (retain, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) MPSectionedCollection *sectionedItems;
@property (nonatomic) long long sectionIndex;
@property (copy, nonatomic) NSArray *subgroups;
@property (copy, nonatomic) NSURL *loadAdditionalContentURL;
@property (copy, nonatomic) NSURL *refreshURL;
@property (nonatomic, getter=isGroupRecommendation) _Bool groupRecommendation;
@property (nonatomic) _Bool displaysAsGridCellInCarPlay;

+ (id)__title_KEY;
+ (id)classesForSecureCoding;
+ (id)__groupType_KEY;
+ (id)__lastUpdatedDate_KEY;
+ (id)__sectionedItems_KEY;
+ (id)__sectionIndex_KEY;
+ (id)__subgroups_KEY;
+ (id)__loadAdditionalContentURL_KEY;
+ (id)__refreshURL_KEY;
+ (id)__displaysAsGridCellInCarPlay_KEY;

- (long long)numberOfItems;
- (id)itemAtIndex:(long long)arg1;

@end
