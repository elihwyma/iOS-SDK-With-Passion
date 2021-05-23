/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SVInteractionHandler : NSObject

{
    CDUnknownBlockType _block;
}

@property (nonatomic, readonly) CDUnknownBlockType block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)handleInteractionWithContext:(id)arg1;

@end
