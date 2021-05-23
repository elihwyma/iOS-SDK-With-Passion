/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, _WKWebsiteDataSize;

@interface WKWebsiteDataRecord : NSObject

{
    struct ObjectStorage<API::WebsiteDataRecord> _websiteDataRecord;
}

@property (nonatomic, readonly) _WKWebsiteDataSize *_dataSize;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic, readonly) NSSet *dataTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (id)_originsStrings;

@end
