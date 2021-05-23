/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

@interface CPLQuarantineFeedbackMessage : CPLFeedbackMessage

{
    NSString *_reason;
    Class _recordClass;
}

@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) Class recordClass;

+ (id)feedbackType;

- (id)serverMessage;
- (id)initWithClass:(Class)arg1 reason:(id)arg2;

@end
