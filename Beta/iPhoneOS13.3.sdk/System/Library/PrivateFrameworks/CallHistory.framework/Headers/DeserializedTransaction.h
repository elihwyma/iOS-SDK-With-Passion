/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <Foundation/NSObject.h>

@class CHRecentCall;

@interface DeserializedTransaction : NSObject

{
    CHRecentCall *_call;
    unsigned long long _type;
}

@property (nonatomic, readonly) CHRecentCall *call;
@property unsigned long long type;

- (id)initWithCall:(id)arg1 andType:(unsigned long long)arg2;

@end
