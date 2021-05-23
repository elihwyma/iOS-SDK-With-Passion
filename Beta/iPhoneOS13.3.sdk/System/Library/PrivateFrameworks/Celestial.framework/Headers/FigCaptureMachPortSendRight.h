/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface FigCaptureMachPortSendRight : NSObject

{
    unsigned int _port;
    _Bool _invalid;
}

@property (nonatomic, readonly) unsigned int port;

- (void)dealloc;
- (void)invalidate;
- (id)initWithPort:(unsigned int)arg1;

@end
