/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/Swift-Protocol.h>

@protocol VNRequestProgressProviding <Swift>

@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (readonly) _Bool indeterminate;

@end
