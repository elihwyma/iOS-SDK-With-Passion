/*
 Image: /System/Library/PrivateFrameworks/StarBoardFoundation.framework/StarBoardFoundation
 */

#import <NSObject.h>

@interface SRDeviceType : NSObject

{
    _Bool _isInternalInstall;
}

@property (nonatomic) _Bool isInternalInstall;

+ (id)sharedInstance;

- (id)init;

@end
