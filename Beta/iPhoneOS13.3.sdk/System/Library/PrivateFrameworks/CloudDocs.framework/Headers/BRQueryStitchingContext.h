/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class BRNotificationReceiver, BRQuery;

__attribute__((visibility("hidden")))
@interface BRQueryStitchingContext : NSObject

{
    BRQuery *_query;
    BRNotificationReceiver *_receiver;
}

- (id)initWithQuery:(id)arg1;
- (void)performAsyncOnReceiver:(CDUnknownBlockType)arg1;

@end
