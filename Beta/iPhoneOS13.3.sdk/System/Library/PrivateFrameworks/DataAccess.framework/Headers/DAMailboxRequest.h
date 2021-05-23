/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DAMailboxRequest : NSObject

{
    int _requestType;
    int _bodyFormat;
    NSString *_messageID;
}

@property (nonatomic) int requestType;
@property (nonatomic) int bodyFormat;
@property (copy, nonatomic) NSString *messageID;

- (id)init;

@end
