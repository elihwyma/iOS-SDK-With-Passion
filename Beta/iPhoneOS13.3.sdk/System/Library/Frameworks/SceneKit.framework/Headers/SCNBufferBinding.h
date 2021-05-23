/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCNBufferBinding : NSObject

{
    NSString *_name;
    long long _frequency;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) CDUnknownBlockType block;
@property (nonatomic) long long frequency;

- (void)dealloc;

@end
