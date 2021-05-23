/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSDEventsProvider.h>

@class TPSPortraitDataProvider;

@interface TPSPortraitEventsProvider : TPSDEventsProvider

{
    TPSPortraitDataProvider *_portraitDataProvider;
}

- (id)init;
- (void)queryEvents:(id)arg1;
- (id)initWithPortraitDataProvider:(id)arg1;

@end
