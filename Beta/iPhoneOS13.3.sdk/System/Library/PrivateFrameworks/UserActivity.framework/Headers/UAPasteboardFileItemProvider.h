/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface UAPasteboardFileItemProvider : NSObject

{
    _Bool _preferFileRep;
    NSString *_type;
    NSUUID *_uuid;
    NSURL *_fileURL;
    NSData *_sandboxExtension;
}

@property (retain) NSURL *fileURL;
@property (retain) NSData *sandboxExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) _Bool preferFileRep;

+ (_Bool)conformsToProtocol:(id)arg1;

- (void)getDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getDataFileWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)getFileName;
- (id)initWithURL:(id)arg1 sandboxExtension:(id)arg2;
- (void)accessFileAtURLWithCompletion:(CDUnknownBlockType)arg1;

@end
