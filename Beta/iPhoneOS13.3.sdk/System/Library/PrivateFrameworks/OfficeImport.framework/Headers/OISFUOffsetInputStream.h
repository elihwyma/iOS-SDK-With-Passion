/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSString;

@protocol SFUInputStream;

__attribute__((visibility("hidden")))
@interface OISFUOffsetInputStream : NSObject <Swift>

{
    id <SFUInputStream> mInputStream;
    long long mInitialOffset;
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
- (id)initWithInputStream:(id)arg1;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;
- (id)initWithInputStream:(id)arg1 initialOffset:(long long)arg2;

@end
