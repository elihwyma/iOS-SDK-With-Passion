/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WKNavigation : NSObject

{
    struct ObjectStorage<API::Navigation> _navigation;
}

@property (nonatomic, readonly) long long effectiveContentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (id)_request;

@end
