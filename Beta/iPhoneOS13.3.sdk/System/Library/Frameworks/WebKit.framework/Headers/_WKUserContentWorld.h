/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _WKUserContentWorld : NSObject

{
    struct ObjectStorage<API::UserContentWorld> _userContentWorld;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

+ (id)worldWithName:(id)arg1;
+ (id)normalWorld;

- (void)dealloc;

@end
