/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface C3DBinding : NSObject

{
    id sourceObject;
    NSString *keyPathSrc;
    NSString *keyPathDst;
    NSDictionary *options;
}

@property (retain, nonatomic) id sourceObject;
@property (retain, nonatomic) NSString *keyPathSrc;
@property (retain, nonatomic) NSString *keyPathDst;
@property (retain, nonatomic) NSDictionary *options;

- (void)dealloc;

@end
