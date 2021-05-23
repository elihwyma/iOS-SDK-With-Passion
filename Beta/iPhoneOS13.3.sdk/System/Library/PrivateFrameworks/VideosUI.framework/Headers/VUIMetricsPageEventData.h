/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIMetricsPageEventData : NSObject

{
    NSString *_pageId;
    NSString *_pageType;
    NSDictionary *_eventData;
}

@property (retain, nonatomic) NSString *pageId;
@property (retain, nonatomic) NSString *pageType;
@property (retain, nonatomic) NSDictionary *eventData;

+ (id)createWithPageId:(id)arg1 andPageType:(id)arg2 andEventData:(id)arg3;
+ (id)createWithPageType:(id)arg1;
+ (id)createWithMetricsData:(id)arg1;

- (id)generateMetricsDataDictionary;

@end
