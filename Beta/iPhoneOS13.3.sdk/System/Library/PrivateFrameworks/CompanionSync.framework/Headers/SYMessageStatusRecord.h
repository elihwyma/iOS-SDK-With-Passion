/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSString;

@interface SYMessageStatusRecord : NSObject

{
    _Bool _deviceACKReceived;
    _Bool _applicationACKReceived;
    _Bool _responseReceived;
    NSString *_messageID;
}

@property (copy, nonatomic) NSString *messageID;
@property (nonatomic) _Bool deviceACKReceived;
@property (nonatomic) _Bool applicationACKReceived;
@property (nonatomic) _Bool responseReceived;
@property (nonatomic, readonly) _Bool isComplete;

- (id)description;
- (id)debugDescription;
- (id)initWithMessageID:(id)arg1;
- (id)initFiller;

@end
