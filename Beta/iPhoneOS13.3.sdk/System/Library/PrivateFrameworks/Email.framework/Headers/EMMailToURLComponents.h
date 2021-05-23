/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface EMMailToURLComponents : NSObject

{
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_subject;
    NSString *_body;
}

@property (nonatomic, readonly) NSArray *toRecipients;
@property (nonatomic, readonly) NSArray *ccRecipients;
@property (nonatomic, readonly) NSArray *bccRecipients;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) NSString *body;

+ (id)componentsWithURL:(id)arg1;

- (id)init;
- (id)initWithURL:(id)arg1;
- (void)_decomposeURL:(id)arg1;

@end
