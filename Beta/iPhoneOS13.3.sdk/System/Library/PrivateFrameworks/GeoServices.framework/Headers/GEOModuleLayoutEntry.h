/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDModuleLayoutEntry, NSArray, NSString;

@interface GEOModuleLayoutEntry : NSObject

{
    GEOPDModuleLayoutEntry *_moduleLayoutEntry;
}

@property (nonatomic, readonly) NSString *debugName;
@property (nonatomic, readonly) NSArray *modules;

+ (id)moduleLayoutEntryFromArray:(id)arg1;

- (id)initWithModuleLayoutEntry:(id)arg1;

@end
