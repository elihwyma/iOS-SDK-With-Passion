/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@protocol JTMediaItemDelegate;

@interface JTMediaItem : NSObject

{
    int _mediaType;
    int _mediaState;
    int _mediaLoadState;
    int _durationAt30fps;
    long long _captureInterfaceOrientation;
    id <JTMediaItemDelegate> _delegate;
}

@property (nonatomic) int mediaType;
@property (nonatomic) int mediaState;
@property (nonatomic) int mediaLoadState;
@property (nonatomic) int durationAt30fps;
@property (nonatomic) long long captureInterfaceOrientation;
@property (weak, nonatomic) id <JTMediaItemDelegate> delegate;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)info;
- (_Bool)canSaveToCameraRoll;
- (id)initWithInfo:(id)arg1 delegate:(id)arg2;
- (_Bool)hasAudibleCharacteristic;
- (_Bool)canBeAddedToSequence;
- (_Bool)canHaveFilter;
- (_Bool)hasVisualCharacteristic;
- (_Bool)hasPhotoCharacteristic;

@end
