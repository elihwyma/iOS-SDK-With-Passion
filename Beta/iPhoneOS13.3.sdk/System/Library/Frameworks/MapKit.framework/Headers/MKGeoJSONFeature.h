/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

@interface MKGeoJSONFeature : NSObject

{
    NSString *_identifier;
    NSData *_properties;
    NSArray *_geometry;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSData *properties;
@property (nonatomic, readonly) NSArray *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_initWithGeoJSONObject:(id)arg1 error:(id *)arg2;
- (id)_initWithProperties:(id)arg1 geometry:(id)arg2 identifier:(id)arg3;

@end
