/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/Swift-Protocol.h>

@class NSString;

@interface IKJSRestrictions : IKJSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long maxMovieRank;
@property (nonatomic, readonly) long long maxTVShowRank;
@property (nonatomic, readonly) _Bool allowsExplicit;
@property (nonatomic, readonly) _Bool allowsErotica;
@property (nonatomic, readonly) long long maxAppRank;
@property (nonatomic, readonly) _Bool allowArtistActivity;
@property (nonatomic, readonly) NSString *maxAppRating;
@property (nonatomic, readonly) _Bool appInstallationAllowed;
@property (nonatomic, readonly) _Bool appAnalyticsAllowed;
@property (nonatomic, readonly) _Bool allowsITunes;
@property (nonatomic, readonly) _Bool allowsShowingUndownloadedTVShows;
@property (nonatomic, readonly) _Bool allowsShowingUndownloadedMovies;

+ (id)restrictionsDidChangeNotificationName;

- (id)maxMovieRatingForCountry:(id)arg1;
- (id)maxTVShowRatingForCountry:(id)arg1;
- (id)_ratingForSetting:(id)arg1 domain:(id)arg2 countryCode:(id)arg3;
- (id)_contentRestrictionsCountryCode;
- (id)asPrivateIKJSRestrictions;

@end
