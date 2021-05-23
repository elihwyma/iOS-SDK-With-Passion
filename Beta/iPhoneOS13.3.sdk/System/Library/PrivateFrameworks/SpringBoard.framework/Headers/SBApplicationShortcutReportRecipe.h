/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBApplicationShortcutReportRecipe : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;

- (id)title;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (void)_dumpReport;

@end
