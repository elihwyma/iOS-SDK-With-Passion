/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@interface GKOOBMessage : NSObject

{
    unsigned short _type;
}

@property (readonly) unsigned short type;

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)data;
- (id)initWithMessageType:(unsigned short)arg1;
- (_Bool)_checkType:(unsigned short)arg1;
- (_Bool)_checkSize:(unsigned long long)arg1;

@end
