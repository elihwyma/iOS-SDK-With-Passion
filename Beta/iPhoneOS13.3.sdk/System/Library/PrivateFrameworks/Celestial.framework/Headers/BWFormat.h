/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWFormat : NSObject

@property (readonly) unsigned int mediaType;
@property (readonly) struct opaqueCMFormatDescription *formatDescription;

+ (id)formatByResolvingRequirements:(id)arg1;

@end
