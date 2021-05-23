/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

#import <Foundation/NSObject.h>

@class FLFollowUpItem;

@interface FLHeadlessActionHandler : NSObject

{
    FLFollowUpItem *_item;
}

@property (retain, nonatomic) FLFollowUpItem *item;

+ (id)handlerWithItem:(id)arg1;

- (void)dealloc;
- (id)initWithItem:(id)arg1;
- (void)handleExtensionBasedAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAction:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
