/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface CKSpotlightSearchResult : NSObject

{
    NSString *_chatGUID;
    NSString *_messageGUID;
    NSString *_summary;
    NSDate *_messageDate;
}

@property (copy, nonatomic) NSString *chatGUID;
@property (copy, nonatomic) NSString *messageGUID;
@property (copy, nonatomic) NSString *summary;
@property (retain, nonatomic) NSDate *messageDate;

- (long long)compare:(id)arg1;
- (id)initWithMessageGUID:(id)arg1 chatGUID:(id)arg2 messageTime:(id)arg3 summery:(id)arg4;

@end
