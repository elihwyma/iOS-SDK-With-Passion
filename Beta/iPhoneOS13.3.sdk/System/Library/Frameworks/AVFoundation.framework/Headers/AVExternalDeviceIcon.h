/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVExternalDeviceIconInternal, NSData;

@interface AVExternalDeviceIcon : NSObject

{
    AVExternalDeviceIconInternal *_externalDeviceIcon;
}

@property (nonatomic, readonly) struct CGSize pixelSize;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly, getter=isPrerendered) _Bool prerendered;

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end
