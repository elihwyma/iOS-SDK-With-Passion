/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSExtension.h>

@class NSIndexSet;

@interface NSExtension (PUEditPlugin)

@property (nonatomic, readonly) NSIndexSet *pu_supportedMediaTypes;

- (_Bool)pu_supportsMediaType:(unsigned long long)arg1;

@end
