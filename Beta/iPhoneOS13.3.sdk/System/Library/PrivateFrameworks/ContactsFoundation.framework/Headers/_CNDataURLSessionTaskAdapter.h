/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _CNDataURLSessionTaskAdapter : NSObject

{
    CDUnknownBlockType _onDataReceived;
    CDUnknownBlockType _onCompletion;
}

@property (copy) CDUnknownBlockType onDataReceived;
@property (copy) CDUnknownBlockType onCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;

@end
