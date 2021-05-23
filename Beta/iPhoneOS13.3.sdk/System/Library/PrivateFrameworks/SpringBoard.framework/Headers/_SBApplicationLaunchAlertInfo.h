/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface _SBApplicationLaunchAlertInfo : NSObject

{
    NSString *_bundleID;
    NSMutableSet *_foregroundScenes;
    NSMutableSet *_alertItems;
}

@property (copy, nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSMutableSet *foregroundScenes;
@property (nonatomic, readonly) NSMutableSet *alertItems;

- (id)description;
- (id)initWithBundleID:(id)arg1;

@end
