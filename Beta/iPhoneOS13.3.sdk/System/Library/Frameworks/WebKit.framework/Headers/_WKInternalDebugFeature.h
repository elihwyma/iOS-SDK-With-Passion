/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _WKInternalDebugFeature : NSObject

{
    struct ObjectStorage<API::InternalDebugFeature> _internalDebugFeature;
}

@property (copy, nonatomic, readonly) NSString *key;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *details;
@property (nonatomic, readonly) _Bool defaultValue;
@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;

@end
