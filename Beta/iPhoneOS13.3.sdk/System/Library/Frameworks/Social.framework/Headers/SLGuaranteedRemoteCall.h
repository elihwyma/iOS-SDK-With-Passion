/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@interface SLGuaranteedRemoteCall : NSObject

{
    CDUnknownBlockType _block;
    id _proxy;
}

@property (copy) CDUnknownBlockType block;
@property (retain) id proxy;

@end
