/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKLTrafficLogMessageFragment : NSObject

{
    unsigned long long _type;
    NSString *_uuid;
    long long _seqNum;
    NSString *_dataString;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) long long seqNum;
@property (nonatomic, readonly) NSString *dataString;

- (id)description;
- (id)initWithMessage:(id)arg1;

@end
