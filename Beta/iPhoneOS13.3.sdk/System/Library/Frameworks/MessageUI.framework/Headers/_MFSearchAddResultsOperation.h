/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSOperation.h>

@class NSArray;

@protocol _MFSearchResultsConsumer;

@interface _MFSearchAddResultsOperation : NSOperation

{
    id <_MFSearchResultsConsumer> _consumer;
    unsigned long long _type;
    NSArray *_results;
}

+ (id)operationWithResults:(id)arg1 ofType:(unsigned long long)arg2 consumer:(id)arg3;

- (void)main;

@end
