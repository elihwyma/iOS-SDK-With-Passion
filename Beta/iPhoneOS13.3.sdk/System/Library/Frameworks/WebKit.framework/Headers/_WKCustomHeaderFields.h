/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface _WKCustomHeaderFields : NSObject

{
    struct ObjectStorage<API::CustomHeaderFields> _fields;
}

@property (copy, nonatomic) NSDictionary *fields;
@property (copy, nonatomic) NSArray *thirdPartyDomains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (id)init;
- (void)dealloc;

@end
