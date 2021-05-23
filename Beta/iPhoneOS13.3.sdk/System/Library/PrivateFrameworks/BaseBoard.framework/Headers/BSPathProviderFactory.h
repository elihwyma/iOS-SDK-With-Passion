/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@interface BSPathProviderFactory : NSObject

+ (id)pathProviderForCurrentContainer;
+ (id)pathProviderForSystemContainerForCurrentProcess;

@end
