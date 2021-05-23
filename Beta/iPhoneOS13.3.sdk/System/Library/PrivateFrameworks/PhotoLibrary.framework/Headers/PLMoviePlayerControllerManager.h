/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PLMoviePlayerControllerManager : NSObject

{
    NSMutableArray *_playerStack;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)moveControllerToTopOfStack:(id)arg1;
- (void)removeControllerFromStack:(id)arg1;

@end
