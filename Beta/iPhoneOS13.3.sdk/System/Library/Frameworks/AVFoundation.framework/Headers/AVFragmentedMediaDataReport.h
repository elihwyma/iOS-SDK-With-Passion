/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVFragmentedMediaDataReportInternal;

@interface AVFragmentedMediaDataReport : NSObject

{
    AVFragmentedMediaDataReportInternal *_internal;
}

@property (nonatomic, readonly) long long numberOfBytesToEndOfFirstVideoFrame;

- (id)init;
- (void)dealloc;
- (id)initWithFigFragmentedMediaDataReportDictionary:(id)arg1;

@end
