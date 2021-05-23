/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSString, NSURL;

@interface UNSAttachmentData : NSObject

{
    NSURL *_fileURL;
}

@property (copy, nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isFileValid:(id)arg1;
+ (_Bool)isFileAtURL:(id)arg1 validForFamily:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dataForFamily:(unsigned long long)arg1 fromFileURL:(id)arg2 error:(id *)arg3;
+ (Class)dataClassForFamily:(unsigned long long)arg1;
+ (id)dataFromFileURL:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)data;
- (id)initWithFileURL:(id)arg1;

@end
