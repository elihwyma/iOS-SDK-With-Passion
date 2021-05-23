/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPPropertySet;

@interface MPModelStoreBrowseSectionBuilder : NSObject

{
    struct {
        unsigned int initialized:1;
        unsigned int title:1;
        unsigned int type:1;
        unsigned int loadAdditionalContentURL:1;
        unsigned int previouslyRetrievedNestedResponse:1;
        unsigned int uniformContentItemType:1;
        unsigned int memberOfChartSet:1;
        unsigned int displaysAsGridCellInCarPlay:1;
        unsigned int brick:1;
    } _requestedBrowseSectionProperties;
    MPPropertySet *_requestedPropertySet;
}

@property (nonatomic, readonly) MPPropertySet *requestedPropertySet;
@property (nonatomic, readonly) MPPropertySet *requestedPropertySetExcludingInternalOnlyProperties;

+ (id)allSupportedInternalOnlyProperties;
+ (id)allSupportedPropertiesIncludingInternalOnlyProperties:(_Bool)arg1;

- (id)initWithRequestedPropertySet:(id)arg1;
- (id)modelObjectWithTitle:(id)arg1 loadAdditionalContentURL:(id)arg2 uniformContentItemType:(long long)arg3 isMemberOfChartSet:(_Bool)arg4 isBrick:(_Bool)arg5 previouslyRetrievedNestedResponse:(id)arg6;
- (id)modelObjectWithTitle:(id)arg1 loadAdditionalContentURL:(id)arg2 uniformContentItemType:(long long)arg3 isMemberOfChartSet:(_Bool)arg4 isBrick:(_Bool)arg5 displaysAsGridCellInCarPlay:(_Bool)arg6 previouslyRetrievedNestedResponse:(id)arg7 onlyContainsEditorialElements:(_Bool)arg8;

@end
