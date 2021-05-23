/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSEnumerator.h>

@class NSError, NSInputStream, PBMessageStreamReader;

@interface BRCPackageManifestReader : NSEnumerator

{
    NSInputStream *_stream;
    PBMessageStreamReader *_reader;
    NSError *_error;
}

@property (nonatomic) Class itemClass;

- (id)init;
- (void)dealloc;
- (id)nextObject;
- (id)initWithURL:(id)arg1;
- (id)error;
- (void)done;
- (id)initWithAsset:(id)arg1;
- (id)initWithInputStream:(id)arg1;
- (id)initWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2;

@end
