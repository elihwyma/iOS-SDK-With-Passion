/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSPerSitePreferenceTimeout : NSObject

{
    double _interval;
    id _fallbackValue;
}

@property (nonatomic, readonly) double interval;
@property (nonatomic, readonly) id fallbackValue;

+ (id)timeoutWithInterval:(double)arg1 fallbackValue:(id)arg2;

- (id)initWithInterval:(double)arg1 fallbackValue:(id)arg2;

@end
