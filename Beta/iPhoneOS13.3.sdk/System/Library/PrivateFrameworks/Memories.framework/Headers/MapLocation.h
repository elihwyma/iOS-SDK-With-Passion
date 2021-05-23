/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

#import <Memories/Swift-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MapLocation : NSObject <Swift>

{
    _Bool _resolving;
    _Bool _resolved;
    int _state;
    NSString *_customName;
    double _latitude;
    double _longitude;
    NSString *_name;
    NSString *_countryName;
    NSMutableArray *_completionHandlers;
}

@property (nonatomic) int state;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *countryName;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (nonatomic, getter=isResolving) _Bool resolving;
@property (nonatomic, getter=isResolved) _Bool resolved;
@property (retain, nonatomic) NSString *customName;

+ (id)defaultLocation;
+ (id)objectFromPlist:(id)arg1 inProject:(id)arg2;
+ (id)mapLocationWithLatitude:(double)arg1 longitude:(double)arg2;
+ (id)mapLocationWithMapItem:(id)arg1;
+ (id)mapLocationWithLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (id)mapLocationWithLocation:(id)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringRepresentation;
- (void)resolveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isEqualToLocation:(id)arg1;
- (void)_resolveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)plistRepresentation;
- (_Bool)hasSameCoordinateAsLocation:(id)arg1 tolerance:(float)arg2;
- (_Bool)hasValidCoordinate;

@end
