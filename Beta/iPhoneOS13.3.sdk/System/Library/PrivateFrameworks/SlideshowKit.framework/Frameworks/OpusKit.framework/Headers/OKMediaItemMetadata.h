/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSArray, NSDate, NSString;

@interface OKMediaItemMetadata : NSObject

{
    unsigned long long _type;
    unsigned long long _subType;
    struct CGSize _resolution;
    NSDate *_creationDate;
    unsigned long long _orientation;
    double _duration;
    double _displayTime;
    double _latitude;
    double _longitude;
    _Bool _opaque;
    NSString *_UTI;
    NSString *_name;
    NSString *_caption;
    _Bool _regionsOfInterestDetected;
    NSArray *_regionsOfInterest;
    struct CGRect _regionOfInterestContainerBounds;
}

@property unsigned long long type;
@property unsigned long long subType;
@property struct CGSize resolution;
@property (retain) NSDate *creationDate;
@property unsigned long long orientation;
@property double duration;
@property double displayTime;
@property double latitude;
@property double longitude;
@property _Bool opaque;
@property (copy) NSString *UTI;
@property (copy) NSString *name;
@property (copy) NSString *caption;
@property _Bool regionsOfInterestDetected;
@property (copy) NSArray *regionsOfInterest;
@property struct CGRect regionOfInterestContainerBounds;
@property (readonly) double aspectRatio;
@property (readonly) CLLocation *location;
@property (readonly) struct CLLocationCoordinate2D locationCoordinate;
@property (readonly) _Bool hasRegionsOfInterest;
@property (readonly) _Bool hasRegionsOfInterestName;
@property (readonly) NSArray *regionsOfInterestName;

+ (unsigned long long)alignResolution:(unsigned long long)arg1;
+ (id)keyPathsForValuesAffectingAspectRatio;
+ (id)keyPathsForValuesAffectingLocation;
+ (id)keyPathsForValuesAffectingLocationCoordinate;
+ (id)keyPathsForValuesAffectingHasRegionsOfInterest;
+ (id)keyPathsForValuesAffectingHasRegionsOfInterestName;
+ (id)keyPathsForValuesAffectingRegionsOfInterestName;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (_Bool)isMediaSubtype:(unsigned long long)arg1;
- (unsigned long long)bestResolutionForSize:(struct CGSize)arg1 scale:(double)arg2 quality:(double)arg3;
- (void)setPropertiesFromDictionary:(id)arg1;
- (id)regionsOfInterestDictionary;
- (id)dictionaryValueForKey:(id)arg1;
- (_Bool)writeToFileURL:(id)arg1;

@end
