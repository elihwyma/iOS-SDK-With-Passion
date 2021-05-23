/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface WBSOneTimeCode : NSObject

{
    NSString *_code;
    NSString *_displayCode;
    NSString *_guid;
    NSString *_handle;
    NSDate *_timeStamp;
}

@property (copy, nonatomic, readonly) NSString *code;
@property (copy, nonatomic, readonly) NSString *displayCode;
@property (copy, nonatomic, readonly) NSString *guid;
@property (copy, nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) NSDate *timeStamp;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
