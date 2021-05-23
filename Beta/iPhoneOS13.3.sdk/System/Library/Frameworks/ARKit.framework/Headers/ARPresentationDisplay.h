/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARDisplayDeviceConfig;

@interface ARPresentationDisplay : NSObject <Swift>

{
    ARDisplayDeviceConfig *_displayConfig;
    long long _viewOrientation;
    struct CGSize _viewSize;
}

@property (copy, nonatomic, readonly) ARDisplayDeviceConfig *displayConfig;
@property (nonatomic) struct CGSize viewSize;
@property (nonatomic) long long viewOrientation;
@property (nonatomic, readonly, getter=isHeld) _Bool held;
@property (nonatomic, readonly, getter=isWorn) _Bool worn;
@property (nonatomic, readonly, getter=isMonoscopic) _Bool monoscopic;
@property (nonatomic, readonly, getter=isStereoscopic) _Bool stereoscopic;
@property (nonatomic, readonly) long long presentationMode;
@property (nonatomic, readonly) long long cameraCompositing;
@property (nonatomic, readonly) long long displayLayout;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDisplayConfig:(id)arg1;
- (_Bool)isEqualToDisplay:(id)arg1;

@end
