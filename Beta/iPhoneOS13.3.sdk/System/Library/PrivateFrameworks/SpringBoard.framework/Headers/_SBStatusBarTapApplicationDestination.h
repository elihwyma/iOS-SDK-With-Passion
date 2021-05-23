/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBApplication;

@interface _SBStatusBarTapApplicationDestination : NSObject <Swift>

{
    SBApplication *_application;
    NSString *_sceneIdentifier;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *sceneIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)application;
- (id)initWithApplication:(id)arg1 sceneIdentifier:(id)arg2;

@end
