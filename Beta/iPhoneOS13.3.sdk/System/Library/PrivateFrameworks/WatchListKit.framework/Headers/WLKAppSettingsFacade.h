/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class WLKAppSettings;

@interface WLKAppSettingsFacade : NSObject

{
    WLKAppSettings *_settings;
}

- (id)initWithSettings:(id)arg1;
- (id)settings;
- (id)accessStatus;
- (void)setAccessStatus:(id)arg1;

@end
