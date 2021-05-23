/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface MFAttachmentDataProvider : NSObject

{
    NSURL *_url;
}

@property (retain) NSURL *url;

+ (id)dataProviderWithURL:(id)arg1;
+ (id)dataProviderWithPath:(id)arg1;

- (id)initWithURL:(id)arg1;
- (id)data;
- (id)_path;
- (_Bool)save:(id)arg1;
- (_Bool)exists;
- (_Bool)_isFileURL;
- (id)_fileAttributes:(id)arg1;
- (id)errorWithMessage:(id)arg1 code:(long long)arg2;

@end
