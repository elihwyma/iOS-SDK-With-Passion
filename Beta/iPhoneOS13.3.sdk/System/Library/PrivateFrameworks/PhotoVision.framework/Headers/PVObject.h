/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PVObject : NSObject

{
    NSString *_localIdentifier;
}

@property (copy, nonatomic, readonly) NSString *localIdentifier;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocalIdentifier:(id)arg1;

@end
