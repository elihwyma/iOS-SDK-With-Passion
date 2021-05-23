/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@interface _MFObjectProperty : NSObject

{
    Class _class;
    SEL _property;
}

@property (nonatomic) Class class;
@property (nonatomic) SEL property;

+ (id)objectPropertyWithClass:(Class)arg1 property:(SEL)arg2;

@end
