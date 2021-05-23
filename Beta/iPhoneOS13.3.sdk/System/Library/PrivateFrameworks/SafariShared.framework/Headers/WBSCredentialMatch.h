/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSFormAutoFillItem.h>

@class NSURLCredential, NSURLProtectionSpace;

@interface WBSCredentialMatch : WBSFormAutoFillItem

{
    NSURLCredential *_credential;
    NSURLProtectionSpace *_protectionSpace;
}

@property (nonatomic, readonly) NSURLCredential *credential;
@property (nonatomic, readonly) NSURLProtectionSpace *protectionSpace;

- (id)completion;
- (id)initWithCredential:(id)arg1;
- (id)initWithCredential:(id)arg1 protectionSpace:(id)arg2;

@end
