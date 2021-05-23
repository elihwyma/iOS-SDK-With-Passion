/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSDictionary;

@interface ETLayerInitializationParameters : NSObject

{
    NSDictionary *_parameters;
}

@property (readonly) NSDictionary *parameters;

- (id)initWithMode:(unsigned long long)arg1 parameters:(id)arg2 error:(id *)arg3;

@end
