/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface GCKOOBMessage : NSObject

{
    unsigned int type;
    unsigned int band;
    NSData *data;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (unsigned int)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (unsigned int)band;

@end
