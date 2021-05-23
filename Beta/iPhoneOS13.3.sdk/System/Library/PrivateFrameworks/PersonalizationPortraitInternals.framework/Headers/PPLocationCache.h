/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, PPLocalLocationStore, PPLocation;

@interface PPLocationCache : NSObject

{
    PPLocalLocationStore *_locationStore;
    _Bool _valid;
    PPLocation *_home;
    PPLocation *_work;
    NSMutableSet *_homeOrWorkAddresses;
}

- (id)init;
- (void)invalidate;
- (void)_refresh;
- (id)locationForHome;
- (id)locationForWork;
- (id)homeOrWorkAddresses;
- (id)initWithLocationStore:(id)arg1;

@end
