/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface STRegionRatings : NSObject

{
    NSDictionary *_ratingsPlist;
}

@property (readonly) NSDictionary *ratingsPlist;
@property (copy, readonly) NSString *preferredRegion;
@property (copy, readonly) NSDictionary *localizedRegionsByCode;
@property (copy, readonly) NSArray *localizedRegionAndCodePairs;

+ (id)sharedRatings;

- (id)init;
- (id)localizedMovieRatingsForRegion:(id)arg1;
- (id)localizedTVRatingsForRegion:(id)arg1;
- (id)localizedAppRatingsForRegion:(id)arg1;
- (id)localizedStringForAppRatingLabel:(id)arg1;
- (id)_overrideValueForString:(id)arg1;
- (id)_localizedLabelForRegion:(id)arg1 rating:(id)arg2;
- (id)_localizedRatingsForRegion:(id)arg1 type:(id)arg2 allContentKey:(id)arg3 noContentKey:(id)arg4;

@end
