/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group, TSUReadChannel;

__attribute__((visibility("hidden")))
@interface TSUZipFileDescriptorWrapper : NSObject

{
    NSObject<OS_dispatch_group> *_accessGroup;
    int _fileDescriptor;
    id <TSUReadChannel> _readChannel;
}

@property (nonatomic, readonly) int fileDescriptor;
@property (nonatomic, readonly) id <TSUReadChannel> readChannel;

- (id)init;
- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1 queue:(id)arg2;
- (void)waitForAccessToEnd;
- (void)beginAccess;
- (void)endAccess;

@end
