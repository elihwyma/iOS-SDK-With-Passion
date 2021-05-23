/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NUBlockBasedURLModifier : NSObject

{
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)modifierWithBlock:(CDUnknownBlockType)arg1;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)modifyURL:(id)arg1;

@end
