/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface _CNFailedFutureImpl : NSObject

{
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)cancel;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (id)initWithError:(id)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)updateDescriptionWithBuilder:(id)arg1;

@end
