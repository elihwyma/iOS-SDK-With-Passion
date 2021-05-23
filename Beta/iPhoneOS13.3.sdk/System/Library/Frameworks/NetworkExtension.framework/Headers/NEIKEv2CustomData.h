/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface NEIKEv2CustomData : NSObject

{
    unsigned long long _customType;
    NSData *_customData;
}

@property unsigned long long customType;
@property (retain) NSData *customData;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
