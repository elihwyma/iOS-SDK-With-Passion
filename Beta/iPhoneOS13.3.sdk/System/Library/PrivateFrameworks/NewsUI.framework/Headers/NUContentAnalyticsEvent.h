/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString, SXAnalyticsEvent;

@interface NUContentAnalyticsEvent : NSObject

{
    SXAnalyticsEvent *_event;
}

@property (nonatomic, readonly) SXAnalyticsEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithEvent:(id)arg1;

@end
