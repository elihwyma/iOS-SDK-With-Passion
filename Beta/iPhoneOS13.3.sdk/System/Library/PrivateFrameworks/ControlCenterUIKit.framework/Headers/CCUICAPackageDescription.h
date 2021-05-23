/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface CCUICAPackageDescription : NSObject

{
    _Bool _flipsForRightToLeftLayoutDirection;
    NSURL *_packageURL;
}

@property (copy, nonatomic, readonly) NSURL *packageURL;
@property (nonatomic) _Bool flipsForRightToLeftLayoutDirection;

+ (id)descriptionForPackageNamed:(id)arg1 inBundle:(id)arg2;

- (id)initWithPackageName:(id)arg1 inBundle:(id)arg2;

@end
