/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface MFDAFolderChangeResult : NSObject

{
    long long _statusCode;
    NSError *_error;
    NSString *_folderID;
    NSString *_folderName;
}

@property (readonly) long long statusCode;
@property (readonly) NSError *error;
@property (readonly) NSString *folderID;
@property (readonly) NSString *folderName;

- (id)description;
- (_Bool)wasSuccessful;
- (id)initWithStatusCode:(long long)arg1 error:(id)arg2 folderID:(id)arg3 folderName:(id)arg4;

@end
