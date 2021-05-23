/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDModuleOptions, NSURL;

@interface GEOModuleOptions : NSObject

{
    GEOPDModuleOptions *_moduleOptions;
}

@property (nonatomic, readonly) NSURL *webContentURL;

- (id)initWithModuleOptions:(id)arg1;

@end
