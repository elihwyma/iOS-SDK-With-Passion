/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _MSStickerSendManagerDelegate;

@interface _MSStickerSendManager : NSObject

{
    id <_MSStickerSendManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <_MSStickerSendManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)insertSticker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startDragSticker:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
