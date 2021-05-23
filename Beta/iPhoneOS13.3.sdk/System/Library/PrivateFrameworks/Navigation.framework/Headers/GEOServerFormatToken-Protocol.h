/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/Swift-Protocol.h>

@class NSArray, NSString;

@protocol GEOServerFormatTokenCountdownValue, GEOServerFormatTokenPriceValue, GEOTransitArtworkDataSource;

@protocol GEOServerFormatToken <Swift>

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *token;
@property (nonatomic, readonly) unsigned int value1;
@property (nonatomic, readonly) unsigned int value2;
@property (nonatomic, readonly) NSArray *value3s;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) id <GEOServerFormatTokenPriceValue> priceValue;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> artworkValue;
@property (nonatomic, readonly) NSArray *timeStampValues;
@property (nonatomic, readonly) id <GEOServerFormatTokenCountdownValue> countdownValue;

@end
