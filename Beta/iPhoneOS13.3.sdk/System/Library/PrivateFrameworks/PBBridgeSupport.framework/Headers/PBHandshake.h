/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <Foundation/NSObject.h>

@interface PBHandshake : NSObject

{
    unsigned int _position;
    unsigned int _version;
    unsigned int _state;
}

@property (nonatomic) unsigned int position;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int state;

- (id)description;

@end
