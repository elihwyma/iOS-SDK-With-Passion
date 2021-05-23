/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class FBSSerialQueue;

@protocol FBSWorkspaceDelegate;

@interface FBSWorkspaceInitializationOptions : NSObject

{
    _Bool _startsInactive;
    id <FBSWorkspaceDelegate> _delegate;
    FBSSerialQueue *_callOutQueue;
}

@property (nonatomic, setter=_setStartsInactive:) _Bool _startsInactive;
@property (nonatomic, readonly) id <FBSWorkspaceDelegate> delegate;
@property (retain, nonatomic) FBSSerialQueue *callOutQueue;

+ (id)optionsWithDelegate:(id)arg1;

- (id)init;
- (id)_initWithDelegate:(id)arg1;

@end
