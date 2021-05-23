/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFStaticItemProvider.h>

@class NSSet;

@interface HUCameraStorageDurationHeaderItemProvider : HFStaticItemProvider

{
    unsigned long long _displayStyle;
    NSSet *_cameraProfiles;
}

@property (nonatomic, readonly) unsigned long long displayStyle;
@property (copy, nonatomic, readonly) NSSet *cameraProfiles;

- (id)initWithItems:(id)arg1;
- (id)invalidationReasons;
- (id)initWithCameraProfiles:(id)arg1 displayStyle:(unsigned long long)arg2;

@end
