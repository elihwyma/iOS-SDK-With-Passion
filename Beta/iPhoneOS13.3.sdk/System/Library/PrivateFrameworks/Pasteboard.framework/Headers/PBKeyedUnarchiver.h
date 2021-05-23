/*
 Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

#import <Foundation/NSKeyedUnarchiver.h>

@class NSSet;

@interface PBKeyedUnarchiver : NSKeyedUnarchiver

{
    NSSet *_allowedClasses;
}

@property (copy, nonatomic) NSSet *allowedClasses;

@end
