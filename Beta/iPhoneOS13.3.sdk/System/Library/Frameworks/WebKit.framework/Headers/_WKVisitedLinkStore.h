/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _WKVisitedLinkStore : NSObject

{
    struct ObjectStorage<WebKit::VisitedLinkStore> _visitedLinkStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (id)init;
- (void)dealloc;
- (void)removeAll;
- (void)addVisitedLinkWithURL:(id)arg1;
- (void)addVisitedLinkWithString:(id)arg1;
- (_Bool)containsVisitedLinkWithURL:(id)arg1;
- (void)removeVisitedLinkWithURL:(id)arg1;

@end
