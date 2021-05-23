/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@protocol IKJSRestrictions <Swift>

@property (nonatomic, readonly) long long maxMovieRank;
@property (nonatomic, readonly) long long maxTVShowRank;
@property (nonatomic, readonly) _Bool allowsExplicit;
@property (nonatomic, readonly) _Bool allowsErotica;

- (unsigned short)maxMovieRatingForCountry: /* Error: Ran out of types for this method. */;
- (unsigned short)maxTVShowRatingForCountry: /* Error: Ran out of types for this method. */;

@end
