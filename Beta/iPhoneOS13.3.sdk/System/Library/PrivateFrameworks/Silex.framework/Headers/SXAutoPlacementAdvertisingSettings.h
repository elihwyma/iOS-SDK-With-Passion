/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXAutoPlacementLayout;

@interface SXAutoPlacementAdvertisingSettings : NSObject

{
    unsigned long long _bannerType;
    id <SXAutoPlacementLayout> _layout;
    unsigned long long _frequency;
    struct _SXConvertibleValue _distanceFromMedia;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long frequency;
@property (nonatomic, readonly) unsigned long long bannerType;
@property (nonatomic, readonly) id <SXAutoPlacementLayout> layout;
@property (nonatomic, readonly) struct _SXConvertibleValue distanceFromMedia;

- (id)initWithFrequency:(unsigned long long)arg1 bannerType:(unsigned long long)arg2 layout:(id)arg3 distanceFromMedia:(struct _SXConvertibleValue)arg4;

@end
