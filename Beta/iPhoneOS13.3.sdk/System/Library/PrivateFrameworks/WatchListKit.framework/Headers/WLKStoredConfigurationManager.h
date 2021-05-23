/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class WLKStoredConfiguration;

@interface WLKStoredConfigurationManager : NSObject

{
    WLKStoredConfiguration *_storedConfiguration;
}

@property (retain, nonatomic) WLKStoredConfiguration *storedConfiguration;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_updateConfiguration:(id)arg1;
- (void)_handleLibraryChange:(id)arg1;
- (void)_handleAccountChange:(id)arg1;
- (void)_setStoredConfiguration:(id)arg1;
- (void)_invalidateWithReason:(id)arg1;

@end
