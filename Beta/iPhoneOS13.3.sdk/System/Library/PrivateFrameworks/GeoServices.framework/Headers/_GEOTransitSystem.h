/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOPBTransitSystem, GEOStyleAttributes, NSString;

@protocol GEOTransitArtworkDataSource;

__attribute__((visibility("hidden")))
@interface _GEOTransitSystem : NSObject <Swift>

{
    GEOPBTransitSystem *_system;
}

@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> artwork;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSystem:(id)arg1;

@end
