/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BSServiceQuality : NSObject

{
    NSString *_serviceClassName;
    unsigned int _serviceClass;
    int _relativePriority;
    _Bool _singleton;
    _Bool _main;
}

@property (nonatomic, readonly) unsigned int serviceClass;
@property (nonatomic, readonly) int relativePriority;

+ (id)main;
+ (id)background;
+ (id)utility;
+ (id)userInitiated;
+ (id)userInteractive;
+ (id)_serviceWithClass:(unsigned int)arg1 relativePriority:(int)arg2 main:(_Bool)arg3;
+ (id)serviceWithClass:(unsigned int)arg1;
+ (id)serviceWithClass:(unsigned int)arg1 relativePriority:(int)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithClass:(unsigned int)arg1 name:(id)arg2 relativePriority:(int)arg3 singleton:(_Bool)arg4 main:(_Bool)arg5;

@end
