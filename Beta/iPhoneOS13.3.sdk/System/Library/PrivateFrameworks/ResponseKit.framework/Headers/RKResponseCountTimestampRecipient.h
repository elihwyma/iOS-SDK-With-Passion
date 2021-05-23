/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface RKResponseCountTimestampRecipient : NSObject

{
    _Bool _hasSameRecipient;
    int _count;
    NSDate *_timestamp;
}

@property int count;
@property (retain) NSDate *timestamp;
@property _Bool hasSameRecipient;

- (id)initWithCount:(int)arg1 timestamp:(id)arg2 hasSameRecipient:(_Bool)arg3;

@end
