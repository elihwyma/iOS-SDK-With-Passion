/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSArray, NSURL;

@protocol EFInvocable;

@interface _MFLoadingContextEventResult : NSObject

{
    NSURL *_contentURL;
    NSArray *_relatedContentItems;
    id <EFInvocable> _cleanupInvocable;
    NSURL *_publicMessageURL;
}

@property (retain, nonatomic) NSURL *contentURL;
@property (retain, nonatomic) NSArray *relatedContentItems;
@property (retain, nonatomic) id <EFInvocable> cleanupInvocable;
@property (retain, nonatomic) NSURL *publicMessageURL;

@end
