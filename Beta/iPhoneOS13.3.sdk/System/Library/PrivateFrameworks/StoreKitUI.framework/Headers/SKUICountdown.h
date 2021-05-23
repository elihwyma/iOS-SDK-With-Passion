/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL, UIColor;

@protocol SKUIArtworkProviding;

__attribute__((visibility("hidden")))
@interface SKUICountdown : NSObject

{
    _Bool _isLoaded;
    _Bool _flapped;
    long long _type;
    NSURL *_URL;
    NSDate *_endDate;
    unsigned long long _dateFormat;
    NSDate *_startDate;
    long long _initialValue;
    long long _finalValue;
    long long _rate;
    NSString *_numberFormat;
    UIColor *_fontColor;
    UIColor *_flapTopColor;
    UIColor *_flapBottomColor;
    id <SKUIArtworkProviding> _artworkProvider;
    id <SKUIArtworkProviding> _endArtworkProvider;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) unsigned long long dateFormat;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) long long initialValue;
@property (nonatomic) long long finalValue;
@property (nonatomic) long long rate;
@property (copy, nonatomic) NSString *numberFormat;
@property (copy, nonatomic) UIColor *fontColor;
@property (copy, nonatomic) UIColor *flapTopColor;
@property (copy, nonatomic) UIColor *flapBottomColor;
@property (nonatomic, getter=isFlapped) _Bool flapped;
@property (retain, nonatomic) id <SKUIArtworkProviding> artworkProvider;
@property (retain, nonatomic) id <SKUIArtworkProviding> endArtworkProvider;

- (_Bool)isLoaded;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithCountdownDictionary:(id)arg1;

@end
