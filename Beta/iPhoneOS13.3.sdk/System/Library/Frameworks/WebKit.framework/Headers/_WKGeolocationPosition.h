/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _WKGeolocationPosition : NSObject

{
    struct ObjectStorage<WebKit::WebGeolocationPosition> _geolocationPosition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

+ (id)positionWithLocation:(id)arg1;

- (void)dealloc;

@end
