/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSKeyedUnarchiver.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKKeyedUnarchiver : NSKeyedUnarchiver

{
    NSArray *searchPaths;
}

@property (retain, nonatomic) NSArray *searchPaths;

@end
