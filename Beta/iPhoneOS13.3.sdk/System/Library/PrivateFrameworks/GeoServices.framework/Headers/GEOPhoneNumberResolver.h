/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@protocol GEOPhoneNumberResolving;

@interface GEOPhoneNumberResolver : NSObject

{
    id <GEOPhoneNumberResolving> _resolver;
}

+ (void)useProxy:(Class)arg1;
+ (void)useRemoteResolver;
+ (id)sharedResolver;
+ (void)useLocalResolver;

- (id)init;
- (void)resolvePhoneNumbers:(id)arg1 handler:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)_alePackResolution:(id)arg1 handler:(CDUnknownBlockType)arg2 queue:(id)arg3;

@end
