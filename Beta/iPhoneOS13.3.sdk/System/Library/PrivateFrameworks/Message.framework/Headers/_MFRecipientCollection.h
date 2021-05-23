/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface _MFRecipientCollection : NSObject

{
    NSMutableArray *_to;
    NSMutableArray *_cc;
    NSMutableArray *_bcc;
}

@property (copy, nonatomic, readonly) NSArray *toRecipients;
@property (copy, nonatomic, readonly) NSArray *toRecipientStrings;
@property (copy, nonatomic, readonly) NSArray *ccRecipients;
@property (copy, nonatomic, readonly) NSArray *ccRecipientStrings;
@property (copy, nonatomic, readonly) NSArray *bccRecipients;
@property (copy, nonatomic, readonly) NSArray *bccRecipientStrings;

- (id)init;
- (void)addToRecipientWithAddress:(id)arg1 comment:(id)arg2;
- (void)addCCRecipientWithAddress:(id)arg1 comment:(id)arg2;
- (void)addBCCRecipientWithAddress:(id)arg1 comment:(id)arg2;
- (void)addToRecipient:(id)arg1;
- (void)addCCRecipient:(id)arg1;
- (void)addBCCRecipient:(id)arg1;

@end
