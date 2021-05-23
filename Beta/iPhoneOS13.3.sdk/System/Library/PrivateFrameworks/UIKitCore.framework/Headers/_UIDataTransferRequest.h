/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSItemProvider, NSProgress, NSString, NSUUID;

@interface _UIDataTransferRequest : NSObject <Swift>

{
    NSItemProvider *_itemProvider;
    NSUUID *_UUID;
    NSProgress *_progress;
}

@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
