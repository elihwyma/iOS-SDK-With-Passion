/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSDEventsProvider.h>

@class TPSTipStatusController;

@interface TPSContentStatusEventsProvider : TPSDEventsProvider

{
    TPSTipStatusController *_tipStatusController;
}

- (id)init;
- (void)queryEvents:(id)arg1;

@end
