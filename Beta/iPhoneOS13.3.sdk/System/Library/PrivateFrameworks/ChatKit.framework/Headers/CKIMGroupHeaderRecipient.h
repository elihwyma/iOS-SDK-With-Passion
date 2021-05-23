/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKIMComposeRecipient.h>

@class NSString;

@interface CKIMGroupHeaderRecipient : CKIMComposeRecipient

{
    NSString *_displayString;
}

@property (copy, nonatomic) NSString *displayString;

@end
