/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class NSString;

@protocol _IKJSRestrictions <Swift>

@property (nonatomic, readonly) long long maxAppRank;
@property (nonatomic, readonly) _Bool allowArtistActivity;
@property (nonatomic, readonly) NSString *maxAppRating;
@property (nonatomic, readonly) _Bool appInstallationAllowed;
@property (nonatomic, readonly) _Bool appAnalyticsAllowed;
@property (nonatomic, readonly) _Bool allowsITunes;
@property (nonatomic, readonly) _Bool allowsShowingUndownloadedTVShows;
@property (nonatomic, readonly) _Bool allowsShowingUndownloadedMovies;

@end
