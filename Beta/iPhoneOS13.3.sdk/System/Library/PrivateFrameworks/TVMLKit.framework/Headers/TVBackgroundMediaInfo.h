/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVMediaInfo.h>

@class IKAppPlayerBridge;

@interface TVBackgroundMediaInfo : TVMediaInfo

{
    IKAppPlayerBridge *_playerBridge;
}

@property (retain, nonatomic) IKAppPlayerBridge *playerBridge;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
