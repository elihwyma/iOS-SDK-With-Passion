/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface STAlwaysAllowList : NSObject

{
    _Bool _shouldAllowEditing;
    NSArray *_allowedBundleIDs;
}

@property (copy, nonatomic) NSArray *allowedBundleIDs;
@property (nonatomic) _Bool shouldAllowEditing;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBlueprint:(id)arg1;

@end
