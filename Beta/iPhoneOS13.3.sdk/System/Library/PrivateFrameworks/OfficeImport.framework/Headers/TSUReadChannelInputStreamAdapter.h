/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSString;

@protocol OS_dispatch_data, TSUReadChannel;

__attribute__((visibility("hidden")))
@interface TSUReadChannelInputStreamAdapter : NSObject <Swift>

{
    id <TSUReadChannel> _readChannel;
    NSObject<OS_dispatch_data> *_leftoverData;
    long long _offset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (long long)offset;
- (void)seekToOffset:(long long)arg1;
- (_Bool)canSeek;
- (id)initWithReadChannel:(id)arg1;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;

@end
