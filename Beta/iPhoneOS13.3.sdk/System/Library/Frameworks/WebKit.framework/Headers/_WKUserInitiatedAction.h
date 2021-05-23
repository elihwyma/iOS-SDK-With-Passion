/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _WKUserInitiatedAction : NSObject

{
    struct ObjectStorage<API::UserInitiatedAction> _userInitiatedAction;
}

@property (nonatomic, readonly, getter=isConsumed) _Bool consumed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (void)consume;

@end
