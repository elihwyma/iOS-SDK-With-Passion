/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol GEOServerFormatTokenCountdownValue, GEOServerFormatTokenPriceValue, GEOTransitArtworkDataSource;

__attribute__((visibility("hidden")))
@interface _TempToken : NSObject

{
    unsigned int _value1;
    unsigned int _value2;
    long long _type;
    NSString *_token;
    NSArray *_value3s;
    NSString *_stringValue;
    id <GEOServerFormatTokenPriceValue> _priceValue;
    id <GEOTransitArtworkDataSource> _artworkValue;
    NSArray *_timeStampValues;
    id <GEOServerFormatTokenCountdownValue> _countdownValue;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned int value1;
@property (nonatomic) unsigned int value2;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) id <GEOServerFormatTokenPriceValue> priceValue;
@property (retain, nonatomic) id <GEOTransitArtworkDataSource> artworkValue;
@property (retain, nonatomic) NSArray *timeStampValues;
@property (retain, nonatomic) id <GEOServerFormatTokenCountdownValue> countdownValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *value3s;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1;

@end
