/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

#import <Message/Swift-Protocol.h>

@class NSArray, NSString;

@interface MFSMTPResponse : NSObject <Swift>

{
    id _lastResponseLine;
    int _status;
    unsigned int _statusClass:10;
    unsigned int _statusSubject:10;
    unsigned int _statusDetail:10;
    NSString *_statusString;
    NSArray *_continuationResponses;
}

@property (nonatomic, readonly) int status;
@property (nonatomic, readonly) unsigned int statusClass;
@property (nonatomic, readonly) unsigned int statusSubject;
@property (nonatomic, readonly) unsigned int statusDetail;
@property (nonatomic, readonly) NSString *statusString;
@property (retain, nonatomic) NSArray *continuationResponses;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setStatus:(int)arg1;
- (id)initWithStatus:(int)arg1;
- (int)failureReason;
- (id)lastResponseLine;
- (id)errorMessageWithAddress:(id)arg1 defaultMessage:(id)arg2;
- (void)setLastResponseLine:(id)arg1;
- (void)_updateEnhancedStatusCodesFromLastResponse;

@end
