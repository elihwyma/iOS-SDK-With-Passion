/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSDictionary;

@interface CPLInfoFeedbackMessage : CPLFeedbackMessage

{
    NSDictionary *_info;
}

@property (nonatomic, readonly) NSDictionary *info;

+ (id)feedbackType;

- (id)initWithInfo:(id)arg1;
- (id)serverMessage;

@end
