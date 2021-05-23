/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@interface EspressoMetalSingleton : NSObject

{
    int _is_memory_tight;
}

@property int is_memory_tight;

+ (id)shared;

@end
