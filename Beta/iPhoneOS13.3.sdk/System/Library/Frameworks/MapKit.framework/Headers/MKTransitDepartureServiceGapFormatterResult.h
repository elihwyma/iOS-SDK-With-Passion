/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MKTransitDepartureServiceGapFormatterResult : NSObject

{
    NSString *_format;
    NSString *_dateDescription;
    unsigned long long _dateFormat;
}

@property (copy, nonatomic, readonly) NSString *format;
@property (copy, nonatomic, readonly) NSString *dateDescription;
@property (nonatomic, readonly) unsigned long long dateFormat;
@property (nonatomic, readonly) NSString *formattedString;

- (id)initWithFormat:(id)arg1 dateDescription:(id)arg2 dateFormat:(unsigned long long)arg3;

@end
