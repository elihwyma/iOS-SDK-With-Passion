/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSArray.h>

@class NSDictionary;

@interface NSArray (PickableRoutes)

@property (nonatomic, readonly) NSDictionary *bw_builtInMicRouteDictionary;

+ (id)bw_selectedInputsArrayForBuiltInMicRouteDictionary:(id)arg1 dataSource:(id)arg2 polarPattern:(unsigned int)arg3;

- (id)pickableRouteWithUID:(id)arg1;

@end
