/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@interface FBSApplicationUninstallOptions : NSObject

{
    _Bool _userInitiated;
}

@property (nonatomic, getter=isUserInitiated) _Bool userInitiated;

+ (id)userInitiated;

@end
