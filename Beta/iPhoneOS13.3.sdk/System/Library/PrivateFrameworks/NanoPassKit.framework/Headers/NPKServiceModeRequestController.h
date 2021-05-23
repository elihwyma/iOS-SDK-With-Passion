/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@interface NPKServiceModeRequestController : NSObject

{
    _Bool _serviceModeRequested;
}

@property (nonatomic) _Bool serviceModeRequested;

+ (id)sharedServiceModeRequestController;

@end
