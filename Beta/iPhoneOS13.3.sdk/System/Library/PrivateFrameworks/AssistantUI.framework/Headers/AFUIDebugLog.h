/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface AFUIDebugLog : NSObject

{
    NSData *_data;
    NSString *_mimeType;
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSData *data;
@property (copy, nonatomic, readonly) NSString *mimeType;
@property (copy, nonatomic, readonly) NSString *name;

+ (id)logWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(_Bool)arg4;

- (id)initWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(_Bool)arg4;

@end
