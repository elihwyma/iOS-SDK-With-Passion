/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSOperation.h>

@protocol _MFSearchResultsConsumer;

@interface _MFSearchProcessResultsOperation : NSOperation

{
    id <_MFSearchResultsConsumer> _consumer;
    unsigned long long _type;
    CDUnknownBlockType _completionBlock;
}

+ (id)operationWithResultsOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2 consumer:(id)arg3;

- (void)main;

@end
