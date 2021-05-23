/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, NSError, NSString;

@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface AVMetadataItemValueRequestInternal : NSObject

{
    AVWeakReference *weakReferenceToMetadataItem;
    id <NSObject><NSCopying> value;
    NSString *dataType;
    NSError *error;
}

@end
