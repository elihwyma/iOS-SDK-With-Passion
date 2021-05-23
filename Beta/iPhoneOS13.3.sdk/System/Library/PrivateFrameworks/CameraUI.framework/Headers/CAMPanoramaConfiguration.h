/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

#import <CameraUI/Swift-Protocol.h>

@class NSDictionary;

@interface CAMPanoramaConfiguration : NSObject <Swift>

{
    int _ringBufferSize;
    long long _sampleBufferWidth;
    long long _sampleBufferHeight;
    long long _maxWidth;
    NSDictionary *__maxWidthPerDevice;
    CDStruct_1b6d18a9 _minimumFramerate;
    CDStruct_1b6d18a9 _maximumFramerate;
}

@property (retain, nonatomic) NSDictionary *_maxWidthPerDevice;
@property (nonatomic, readonly) long long sampleBufferWidth;
@property (nonatomic, readonly) long long sampleBufferHeight;
@property (nonatomic, readonly) CDStruct_1b6d18a9 minimumFramerate;
@property (nonatomic, readonly) CDStruct_1b6d18a9 maximumFramerate;
@property (nonatomic, readonly) int ringBufferSize;
@property (nonatomic, readonly) long long maxWidth;

+ (id)sharedInstance;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithACTConfiguration:(id)arg1;
- (long long)maxWidthForDevice:(long long)arg1;

@end
