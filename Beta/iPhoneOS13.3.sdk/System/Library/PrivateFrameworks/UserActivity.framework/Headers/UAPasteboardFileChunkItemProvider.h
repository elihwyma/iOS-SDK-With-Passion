/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

#import <UserActivity/Swift-Protocol.h>

@class NSFileHandle, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface UAPasteboardFileChunkItemProvider : NSObject <Swift>

{
    NSString *_type;
    NSUUID *_uuid;
    NSFileHandle *_dataFile;
    NSNumber *_offsetInFile;
    long long _chunkSize;
}

@property (retain) NSFileHandle *dataFile;
@property (retain) NSNumber *offsetInFile;
@property long long chunkSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *type;

- (void)getDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithType:(id)arg1 fileHandle:(id)arg2 offsetInFile:(id)arg3 size:(long long)arg4;

@end
