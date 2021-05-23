/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SVInteractionObserver : NSObject

{
    CDUnknownBlockType _willBlock;
    CDUnknownBlockType _didBlock;
}

@property (nonatomic, readonly) CDUnknownBlockType willBlock;
@property (nonatomic, readonly) CDUnknownBlockType didBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithWillHandleInteractionBlock:(CDUnknownBlockType)arg1;
- (void)willHandleInteractionWithContext:(id)arg1;
- (void)didHandleInteractionWithContext:(id)arg1;
- (id)initWithWillHandleInteractionBlock:(CDUnknownBlockType)arg1 didHandleInteractionBlock:(CDUnknownBlockType)arg2;
- (id)initWithDidHandleInteractionBlock:(CDUnknownBlockType)arg1;

@end
