/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBAppSwitcherService : NSObject

{
    NSString *_bundleIdentifier;
    NSString *_viewServiceClassName;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *viewServiceClassName;

+ (id)switcherServiceWithName:(id)arg1 viewServiceClassName:(id)arg2;

@end
