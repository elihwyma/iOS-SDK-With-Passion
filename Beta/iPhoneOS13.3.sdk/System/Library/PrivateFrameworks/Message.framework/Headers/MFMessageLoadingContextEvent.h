/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFMailMessage, MFMessageLoadingContext, MFMimeBody, MFMimePart, NSArray, NSError;

@interface MFMessageLoadingContextEvent : NSObject

{
    _Bool _hasLoadedCompleteBody;
    _Bool _hasLoadedBestAlternativePart;
    MFMessageLoadingContext *_context;
    NSArray *_content;
    unsigned long long _remainingBytes;
    long long _transportType;
    NSError *_error;
    MFMimePart *_loadedPart;
    MFMimeBody *_loadedBody;
}

@property (weak, nonatomic) MFMessageLoadingContext *context;
@property (copy, nonatomic) NSArray *content;
@property (nonatomic) _Bool hasLoadedCompleteBody;
@property (nonatomic) _Bool hasLoadedBestAlternativePart;
@property (nonatomic) unsigned long long remainingBytes;
@property (nonatomic) long long transportType;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) NSError *smimeError;
@property (retain, nonatomic) MFMimePart *loadedPart;
@property (retain, nonatomic) MFMimeBody *loadedBody;
@property (nonatomic, readonly) MFMailMessage *message;

- (id)description;
- (id)debugDescription;
- (id)_descriptionForDebugging:(_Bool)arg1;

@end
