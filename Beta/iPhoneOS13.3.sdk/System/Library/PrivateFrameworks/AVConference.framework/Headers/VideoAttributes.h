/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

#import <AVConference/Swift-Protocol.h>

@interface VideoAttributes : NSObject <Swift>

{
    struct CGSize ratio;
    int orientation;
    int camera;
    _Bool cameraSwitching;
    struct CGRect contentsRect;
    _Bool videoSourceScreen;
    _Bool videoMirrored;
}

@property (nonatomic) struct CGSize ratio;
@property (nonatomic) int orientation;
@property (nonatomic) int camera;
@property (nonatomic) _Bool cameraSwitching;
@property (nonatomic) struct CGRect contentsRect;
@property (nonatomic) _Bool videoSourceScreen;
@property (nonatomic) _Bool videoMirrored;

+ (id)videoAttributesWithVideoAttributes:(id)arg1;
+ (int)videoAttributeCameraForCameraUID:(id)arg1;
+ (id)cameraUIDForVideoAttributeCamera:(int)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (_Bool)isEqualToVideoAttributes:(id)arg1;
- (id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(struct CGSize)arg2 contentsRect:(struct CGRect)arg3;
- (void)decodeFromNSDictionary:(id)arg1;
- (id)copyEncodedDictionary;

@end
