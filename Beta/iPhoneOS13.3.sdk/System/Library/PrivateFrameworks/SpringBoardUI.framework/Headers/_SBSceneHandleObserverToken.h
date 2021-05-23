/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface _SBSceneHandleObserverToken : NSObject

{
    NSMutableDictionary *_owner;
}

@property (weak, nonatomic, readonly) NSMutableDictionary *owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOwner:(id)arg1;

@end
