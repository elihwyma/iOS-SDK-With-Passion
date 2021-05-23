/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSError, NSString, NSURL;

@interface SSVDirectUpload : NSObject

{
    NSString *_categoryName;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesSent;
    NSError *_error;
    _Bool _explicitContent;
    long long _persistentIdentifier;
    long long _state;
    NSString *_subtitle;
    NSURL *_thumbnailImageURL;
    NSString *_title;
    NSString *_uploadKind;
    NSString *_uti;
}

@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) long long countOfBytesExpectedToSend;
@property (nonatomic) long long countOfBytesSent;
@property (copy, nonatomic) NSError *error;
@property (nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property (nonatomic) long long persistentIdentifier;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSURL *thumbnailImageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *UTI;
@property (copy, nonatomic, setter=_setUploadKind:) NSString *_uploadKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)_adoptStatusFromUpload:(id)arg1;

@end
