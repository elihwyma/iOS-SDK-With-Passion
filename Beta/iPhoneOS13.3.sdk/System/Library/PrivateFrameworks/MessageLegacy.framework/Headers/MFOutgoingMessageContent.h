/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class MFMutableMessageHeaders, MFOutgoingLibraryMessageContent, MFOutgoingMultipartRelatedContent, MFOutgoingRichtextMessageContent, NSArray;

@interface MFOutgoingMessageContent : NSObject

{
    MFMutableMessageHeaders *_headers;
    NSArray *_placeholders;
}

@property (retain, nonatomic) MFMutableMessageHeaders *headers;
@property (retain, nonatomic) NSArray *placeholders;
@property (nonatomic, readonly) MFOutgoingLibraryMessageContent *libraryContent;
@property (nonatomic, readonly) MFOutgoingRichtextMessageContent *richtextContent;
@property (nonatomic, readonly) MFOutgoingMultipartRelatedContent *multipartContent;

- (void)dealloc;
- (id)copy;

@end
