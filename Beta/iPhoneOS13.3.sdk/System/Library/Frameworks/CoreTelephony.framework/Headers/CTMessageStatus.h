/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@interface CTMessageStatus : NSObject

{
    unsigned int _messageId;
    int _messageType;
    int _result;
}

@property (readonly) unsigned int messageId;
@property (readonly) int messageType;
@property (readonly) int result;

- (id)initWithMessageId:(unsigned int)arg1 messageType:(int)arg2 result:(int)arg3;

@end
