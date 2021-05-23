/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CPLResetFeedbackMessage : CPLFeedbackMessage

{
    NSString *_resetType;
    NSString *_reason;
    NSString *_uuid;
}

@property (nonatomic, readonly) NSString *resetType;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) NSString *uuid;

+ (id)feedbackType;

- (id)serverMessage;
- (id)initWithResetType:(id)arg1 reason:(id)arg2 uuid:(id)arg3;

@end
