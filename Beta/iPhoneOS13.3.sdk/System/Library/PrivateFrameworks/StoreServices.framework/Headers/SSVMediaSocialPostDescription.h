/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SSVMediaSocialPostDescription : NSObject

{
    NSNumber *_accountIdentifier;
    NSArray *_attachments;
    _Bool _attributed;
    NSString *_authorIdentifier;
    NSString *_authorType;
    NSArray *_contentItems;
    NSArray *_externalServiceDestinations;
    NSString *_sourceApplicationIdentifier;
    NSString *_text;
}

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSArray *attachments;
@property (nonatomic, getter=isAttributed) _Bool attributed;
@property (copy, nonatomic) NSString *authorIdentifier;
@property (copy, nonatomic) NSString *authorType;
@property (copy, nonatomic) NSArray *contentItems;
@property (copy, nonatomic) NSArray *externalServiceDestinations;
@property (copy, nonatomic) NSString *sourceApplicationIdentifier;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
