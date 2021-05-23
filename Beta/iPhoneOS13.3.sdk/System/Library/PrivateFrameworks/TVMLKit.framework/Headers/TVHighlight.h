/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, TVTimeRange;

@interface TVHighlight : NSObject

{
    NSString *_localizedName;
    NSString *_highlightDescription;
    TVTimeRange *_timeRange;
    NSURL *_imageURL;
    TVTimeRange *_dateRange;
}

@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *highlightDescription;
@property (retain, nonatomic) TVTimeRange *timeRange;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) TVTimeRange *dateRange;

@end
