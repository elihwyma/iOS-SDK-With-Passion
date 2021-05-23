/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@class NSArray;

@interface CAMPreviewFiltersCommand : CAMCaptureCommand

{
    NSArray *_filters;
}

@property (nonatomic, readonly) NSArray *filters;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithSubcommands:(id)arg1;
- (id)initWithFilters:(id)arg1;

@end
