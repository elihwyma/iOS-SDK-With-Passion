/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PXSiriSearchRequest : NSObject

{
    NSArray *_queryTokens;
}

@property (retain, nonatomic) NSArray *queryTokens;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchForPhotosIntent:(id)arg1;
- (id)initWithStartPhotoPlaybackIntent:(id)arg1;
- (id)_queryTokensForPhotoAttributeOptions:(unsigned long long)arg1;
- (id)_queryTokensForAlbumName:(id)arg1;
- (id)_queryTokensForSearchTerms:(id)arg1 searchTermsOperator:(long long)arg2;
- (id)_queryTokensForLocationCreated:(id)arg1;
- (id)_queryTokensForPeopleInPhoto:(id)arg1 peopleInPhotoOperator:(long long)arg2;
- (id)_queryTokensForDateCreated:(id)arg1;
- (id)_queryTokensForEvents:(id)arg1;
- (id)_queryTokensForPlaces:(id)arg1;
- (id)_queryTokensForActivities:(id)arg1;
- (id)_queryTokensForGeographicalFeatures:(id)arg1;
- (_Bool)_useNLDateSearch;

@end
