/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MKTransitSectionPagingFilter : NSObject

{
    _Bool _limitNumLines;
    unsigned long long _numLinesFallbackThreshold;
    unsigned long long _numLinesFallbackValue;
}

@property (nonatomic) _Bool limitNumLines;
@property (nonatomic) unsigned long long numLinesFallbackThreshold;
@property (nonatomic) unsigned long long numLinesFallbackValue;

+ (id)defaultFilterForDepartures;
+ (id)defaultFilterForInactiveLines;

@end
