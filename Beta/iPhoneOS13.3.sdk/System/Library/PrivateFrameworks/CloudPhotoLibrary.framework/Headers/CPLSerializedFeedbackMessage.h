/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLServerFeedbackMessage, NSDictionary, NSString, NSUUID;

@interface CPLSerializedFeedbackMessage : NSObject

{
    NSUUID *_uuid;
    CPLServerFeedbackMessage *_serverMessage;
    NSString *_feedbackType;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSString *feedbackType;
@property (nonatomic, readonly) CPLServerFeedbackMessage *serverMessage;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (id)plistRepresentationForMessages:(id)arg1;
+ (id)messagesForPlistRepresentation:(id)arg1;

- (id)description;
- (id)initWithMessage:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
