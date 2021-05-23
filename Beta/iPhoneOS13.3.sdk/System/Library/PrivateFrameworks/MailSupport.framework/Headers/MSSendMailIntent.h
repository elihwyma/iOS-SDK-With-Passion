/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Intents/INIntent.h>

@class NSArray, NSNumber, NSString;

@interface MSSendMailIntent : INIntent

@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSArray *to;
@property (copy, nonatomic) NSArray *cc;
@property (copy, nonatomic) NSArray *bcc;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSNumber *isDraft;
@property (copy, nonatomic) NSString *userTypedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

- (id)_privacySafeDescription;

@end
