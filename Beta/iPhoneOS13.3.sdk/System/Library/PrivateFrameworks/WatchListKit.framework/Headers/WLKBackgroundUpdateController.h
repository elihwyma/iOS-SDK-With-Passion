/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@interface WLKBackgroundUpdateController : NSObject

{
    int _notifyToken;
    _Bool _notifyTokenIsValid;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_init;

@end
