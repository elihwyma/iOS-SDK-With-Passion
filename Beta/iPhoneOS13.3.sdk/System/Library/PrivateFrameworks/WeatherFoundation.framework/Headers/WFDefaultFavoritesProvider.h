/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSString;

@protocol WFFavoriteLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface WFDefaultFavoritesProvider : NSObject

{
    id <WFFavoriteLocationProviderDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <WFFavoriteLocationProviderDelegate> delegate;

- (id)init;
- (void)setLocations:(id)arg1;
- (id)locations;
- (void)addLocation:(id)arg1;
- (id)initWithDelegate:(id)arg1 persistence:(id)arg2;
- (id)locationFromCity:(id)arg1;
- (void)removeLocation:(id)arg1;
- (_Bool)canProvideDefaultFavorites;

@end
