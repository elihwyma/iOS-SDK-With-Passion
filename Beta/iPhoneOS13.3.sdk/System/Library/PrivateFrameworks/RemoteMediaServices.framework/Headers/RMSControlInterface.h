/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface RMSControlInterface : NSObject

{
    _Bool _supportsSpeakerSelection;
    _Bool _supportsVolumeControl;
    _Bool _supportsDirectionalControl;
}

@property (nonatomic) _Bool supportsSpeakerSelection;
@property (nonatomic) _Bool supportsVolumeControl;
@property (nonatomic) _Bool supportsDirectionalControl;

- (id)protobuf;
- (id)initWithProtobuf:(id)arg1;

@end
