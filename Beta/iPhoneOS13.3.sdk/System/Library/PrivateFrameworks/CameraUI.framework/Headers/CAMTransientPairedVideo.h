/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface CAMTransientPairedVideo : NSObject

{
    NSURL *_url;
    long long _filterType;
    CDStruct_1b6d18a9 _stillDisplayTime;
}

@property (copy, nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) CDStruct_1b6d18a9 stillDisplayTime;
@property (nonatomic, readonly) long long filterType;

- (id)initWithURL:(id)arg1 stillDisplayTime:(CDStruct_1b6d18a9)arg2 filterType:(long long)arg3;

@end
