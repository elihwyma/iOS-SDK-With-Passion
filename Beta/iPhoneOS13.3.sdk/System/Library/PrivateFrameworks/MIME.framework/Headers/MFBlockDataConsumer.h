/*
 Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSObject.h>

#import <MIME/Swift-Protocol.h>

@class NSString;

@interface MFBlockDataConsumer : NSObject <Swift>

{
    CDUnknownBlockType _appendHandler;
    CDUnknownBlockType _doneHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)appendData:(id)arg1;
- (void)done;
- (id)initWithAppendHandler:(CDUnknownBlockType)arg1 doneHandler:(CDUnknownBlockType)arg2;

@end
