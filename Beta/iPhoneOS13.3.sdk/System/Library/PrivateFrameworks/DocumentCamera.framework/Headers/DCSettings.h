/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <Foundation/NSObject.h>

@class NSUserDefaults;

@interface DCSettings : NSObject

{
    NSUserDefaults *_userDefaults;
}

@property (retain) NSUserDefaults *userDefaults;
@property (nonatomic, readonly) _Bool enableViewService;
@property (nonatomic, readonly) _Bool finishAfterFirstScan;

+ (id)sharedSettings;

- (id)init;
- (id)enableViewServiceBoxed;
- (void)setEnableViewServiceBoxed:(id)arg1;
- (id)finishAfterFirstScanBoxed;
- (void)setFinishAfterFirstScanBoxed:(id)arg1;

@end
