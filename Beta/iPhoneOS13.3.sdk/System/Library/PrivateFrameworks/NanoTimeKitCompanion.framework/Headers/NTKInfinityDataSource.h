/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, NSArray;

@interface NTKInfinityDataSource : NSObject

{
    CLKDevice *_device;
    NSArray *_listings;
    long long _numberOfTotalActions;
    long long _numberOfTotalMagicMoments;
}

@property (nonatomic) long long numberOfTotalActions;
@property (nonatomic) long long numberOfTotalMagicMoments;

+ (id)buzzColor;
+ (id)woodyColor;
+ (id)jessieColor;
+ (id)ballColor;
+ (id)hangGliderColor;
+ (id)bullseyeColor;
+ (id)supportingCastColor;
+ (id)rexColor;
+ (id)hammColor;
+ (id)alienColor;
+ (id)spotlightColor;

- (id)initForDevice:(id)arg1;
- (id)listingsOfTypes:(id)arg1 withAttributes:(id)arg2 recentlyUsed:(id)arg3;
- (id)listingsForCharacter:(unsigned long long)arg1 ofTypes:(id)arg2 withAttributes:(id)arg3 recentlyUsed:(id)arg4;
- (id)listingsForCharacter:(unsigned long long)arg1;
- (void)_loadCharacters;
- (void)_countListings;

@end
