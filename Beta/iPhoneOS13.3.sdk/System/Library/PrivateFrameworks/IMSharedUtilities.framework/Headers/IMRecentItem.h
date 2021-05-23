/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSNumber, NSString, NSURL;

@interface IMRecentItem : NSObject

{
    NSNumber *_timestamp;
    NSString *_GUID;
    NSURL *_fileURL;
    NSData *_payloadData;
    NSDictionary *_messageItemInfo;
    NSString *_accessibilityString;
}

@property (retain, nonatomic) NSNumber *timestamp;
@property (copy, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSData *payloadData;
@property (retain, nonatomic) NSDictionary *messageItemInfo;
@property (retain, nonatomic) NSString *accessibilityString;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithGUID:(id)arg1 data:(id)arg2 messageItemInfo:(id)arg3;
- (id)asJSONObject;

@end
