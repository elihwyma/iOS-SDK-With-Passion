/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@interface SignpostSupportMessageArgument : NSObject

{
    unsigned char _type;
    NSObject *_argumentObject;
}

@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, readonly) NSObject *argumentObject;

- (_Bool)isEqual:(id)arg1;
- (id)initWithArgumentObject:(id)arg1;

@end
