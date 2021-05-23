/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <Foundation/NSObject.h>

@interface FTServiceStatus : NSObject

{
    unsigned long long _supportedServicesFlags;
    int _supportedServicesToken;
    _Bool _blockPost;
}

@property (nonatomic) int supportedServicesToken;
@property unsigned long long supportedServicesFlags;
@property (nonatomic) _Bool blockPost;
@property (nonatomic, readonly) _Bool iMessageSupported;
@property (nonatomic, readonly) _Bool faceTimeAudioSupported;
@property (nonatomic, readonly) _Bool faceTimeMultiwaySupported;

+ (id)sharedInstance;

- (void)dealloc;
- (id)initPrivate;
- (void)_reload;
- (void)_addObservers;
- (void)_removeObservers;
- (unsigned long long)_noCache_supportedServicesFlags;

@end
