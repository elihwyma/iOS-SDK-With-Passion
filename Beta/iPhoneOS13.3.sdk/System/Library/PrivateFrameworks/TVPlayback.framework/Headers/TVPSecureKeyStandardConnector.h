/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString;

@interface TVPSecureKeyStandardConnector : NSObject

{
    NSOperationQueue *_operationQueue;
}

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)secureKeyStandardLoader:(id)arg1 requestForFetchingDataFromURL:(id)arg2;
- (void)secureKeyStandardLoader:(id)arg1 sendAsynchronousRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)secureKeyStandardLoader:(id)arg1 requestForPostingData:(id)arg2 toURL:(id)arg3;

@end
