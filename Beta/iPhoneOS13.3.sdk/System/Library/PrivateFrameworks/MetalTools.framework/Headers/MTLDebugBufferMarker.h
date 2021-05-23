/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTLDebugBufferMarker : NSObject

{
    NSString *_label;
    struct _NSRange _range;
}

@property (copy, nonatomic) NSString *label;
@property (nonatomic) struct _NSRange range;

- (void)dealloc;

@end
