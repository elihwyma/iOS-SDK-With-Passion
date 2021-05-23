/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString;

@protocol SXAutoPlacementLayout;

@interface SXJSONAdvertisementSettings : SXJSONObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long frequency;
@property (nonatomic, readonly) unsigned long long bannerType;
@property (nonatomic, readonly) id <SXAutoPlacementLayout> layout;
@property (nonatomic, readonly) struct _SXConvertibleValue distanceFromMedia;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

- (unsigned long long)bannerTypeWithValue:(id)arg1 withType:(int)arg2;

@end
