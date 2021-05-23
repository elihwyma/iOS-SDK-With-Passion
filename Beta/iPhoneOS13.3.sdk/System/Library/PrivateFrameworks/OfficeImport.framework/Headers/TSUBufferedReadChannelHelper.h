/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSString, TSUBufferedReadChannel;

__attribute__((visibility("hidden")))
@interface TSUBufferedReadChannelHelper : NSObject <Swift>

{
    TSUBufferedReadChannel *_bufferedReadChannel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)close;
- (id)initWithBufferedReadChannel:(id)arg1;
- (void)readWithHandler:(CDUnknownBlockType)arg1;

@end
