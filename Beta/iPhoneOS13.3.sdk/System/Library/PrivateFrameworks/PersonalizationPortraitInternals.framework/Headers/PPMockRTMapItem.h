/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSString, PPMockRTAddress, PPMockRTLocation;

@interface PPMockRTMapItem : NSObject

{
    NSString *_name;
    PPMockRTAddress *_address;
    PPMockRTLocation *_location;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) PPMockRTAddress *address;
@property (retain, nonatomic) PPMockRTLocation *location;

@end
