/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLServerFeedbackMessage, NSDate, NSString;

@interface CPLFeedbackMessage : NSObject

{
    NSDate *_creationDate;
    NSString *_feedbackType;
}

@property (nonatomic, readonly) NSString *feedbackType;
@property (nonatomic, readonly) CPLServerFeedbackMessage *serverMessage;

+ (id)feedbackType;

- (id)init;

@end
