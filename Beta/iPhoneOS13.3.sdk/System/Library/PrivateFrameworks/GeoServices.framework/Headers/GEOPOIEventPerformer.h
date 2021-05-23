/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSString, NSURL;

@interface GEOPOIEventPerformer : NSObject <Swift>

{
    NSString *_localizedName;
    NSString *_iTunesIdentifier;
    NSURL *_iTunesURL;
}

@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *iTunesIdentifier;
@property (retain, nonatomic) NSURL *iTunesURL;

+ (_Bool)supportsSecureCoding;
+ (id)poiEventPerformersForPerformers:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPerformer:(id)arg1;

@end
