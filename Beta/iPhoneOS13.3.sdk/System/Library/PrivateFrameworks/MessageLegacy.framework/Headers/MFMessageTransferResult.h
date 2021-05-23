/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MFMessageTransferResult : NSObject

{
    unsigned long long _resultCode;
    NSArray *_failedMessages;
    NSArray *_transferedMessages;
}

@property (nonatomic, readonly) unsigned long long resultCode;
@property (nonatomic, readonly) NSArray *failedMessages;
@property (nonatomic, readonly) NSArray *transferedMessages;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithResultCode:(unsigned long long)arg1 failedMessages:(id)arg2 transferedMessage:(id)arg3;

@end
