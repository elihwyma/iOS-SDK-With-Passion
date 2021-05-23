/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class BRFieldCKInfo;

__attribute__((visibility("hidden")))
@interface BRCServerZoneHealthState : NSObject <Swift>

{
    int _state;
    BRFieldCKInfo *_ckInfo;
}

@property (nonatomic, readonly) BRFieldCKInfo *ckInfo;
@property (nonatomic, readonly) int state;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCKInfo:(id)arg1 state:(int)arg2;
- (id)initWithServerZoneHealthState:(id)arg1;

@end
