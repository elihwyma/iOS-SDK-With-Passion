/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <SidecarCore/SidecarTransfer.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SidecarTransferSender : SidecarTransfer

{
    long long _itemID;
    NSArray *_items;
    NSMutableArray *_slices;
    long long _type;
}

@property (nonatomic, readonly) long long type;

- (void)sendItems:(id)arg1 messageType:(long long)arg2;
- (id)initWithSession:(id)arg1 requestID:(long long)arg2 transferID:(long long)arg3;
- (CDUnknownBlockType)_resumeMessage:(id)arg1;
- (void)_sendCompletion:(id)arg1;

@end
