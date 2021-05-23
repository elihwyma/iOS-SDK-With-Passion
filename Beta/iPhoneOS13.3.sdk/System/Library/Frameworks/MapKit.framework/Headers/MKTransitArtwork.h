/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;

@interface MKTransitArtwork : NSObject

{
    NSString *_accessibilityText;
    _Bool _hasRoutingIncidentBadge;
    int _artworkSourceType;
    int _artworkUseType;
    id <GEOTransitShieldDataSource> _shieldDataSource;
    id <GEOTransitIconDataSource> _iconDataSource;
    id <GEOTransitShieldDataSource> _iconFallbackShieldDataSource;
    id <GEOTransitTextDataSource> _textDataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int artworkSourceType;
@property (nonatomic, readonly) int artworkUseType;
@property (nonatomic, readonly) id <GEOTransitShieldDataSource> shieldDataSource;
@property (nonatomic, readonly) id <GEOTransitIconDataSource> iconDataSource;
@property (nonatomic, readonly) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property (nonatomic, readonly) id <GEOTransitTextDataSource> textDataSource;
@property (nonatomic, readonly) _Bool hasRoutingIncidentBadge;
@property (nonatomic, readonly) NSString *accessibilityText;

+ (id)artworkWithShield:(id)arg1 accessibilityText:(id)arg2;
+ (id)artworkWithText:(id)arg1;
+ (id)artworkWithIcon:(id)arg1 accessibilityText:(id)arg2;

- (id)initWithText:(id)arg1;
- (id)initWithShield:(id)arg1 accessibilityText:(id)arg2;
- (id)initWithIcon:(id)arg1 accessibilityText:(id)arg2;
- (id)initWithIcon:(id)arg1 fallbackShield:(id)arg2 accessibilityText:(id)arg3;

@end
