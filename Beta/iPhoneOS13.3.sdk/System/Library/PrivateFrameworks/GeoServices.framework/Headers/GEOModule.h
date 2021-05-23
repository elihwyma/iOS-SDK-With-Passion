/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOModuleOptions, GEOPDModule;

@interface GEOModule : NSObject

{
    GEOPDModule *_module;
}

@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) GEOModuleOptions *options;

- (id)initWithModule:(id)arg1;

@end
