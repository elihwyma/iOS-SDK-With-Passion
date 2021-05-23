/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSOutputStream, NSString;

@interface NviDataLogger : NSObject

{
    NSOutputStream *_oStream;
}

@property (retain, nonatomic) NSOutputStream *oStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)logData:(id)arg1;
- (id)initWithFilePath:(id)arg1 appendHdr:(id)arg2;
- (void)endRequest;

@end
