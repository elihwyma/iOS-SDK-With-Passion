/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NMSAppActivityStatus : NSObject

{
    NSString *_bundleID;
}

@property (nonatomic, readonly) NSString *bundleID;

- (id)description;
- (id)initWithBundleID:(id)arg1;
- (_Bool)_exceedsDormancyIntervalForDate:(id)arg1;
- (_Bool)isAppDormant;

@end
