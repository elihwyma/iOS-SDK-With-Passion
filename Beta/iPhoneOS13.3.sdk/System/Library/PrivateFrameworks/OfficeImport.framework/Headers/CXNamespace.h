/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CXNamespace : NSObject

{
    const char *mUri;
    struct _xmlDoc *mDocument;
    struct _xmlNs *mDocumentNamespace;
    CXNamespace *mFallbackNamespace;
}

@property (retain, nonatomic) CXNamespace *fallbackNamespace;

+ (void)registerNamespace:(id)arg1;
+ (_Bool)isNamespaceSupported:(const char *)arg1;
+ (_Bool)isPrefixSupportedFromNodeContext:(struct _xmlNode *)arg1 prefix:(const char *)arg2;
+ (_Bool)isPrefixSupportedFromStream:(struct _xmlTextReader *)arg1 prefix:(const char *)arg2;
+ (void)clearRegisteredNamespaces;

- (id)init;
- (_Bool)containsNode:(struct _xmlNode *)arg1;
- (const char *)uri;
- (_Bool)containsAttribute:(struct _xmlAttr *)arg1;
- (id)initUnsupportedNsWithUri:(const char *)arg1;
- (id)initWithUri:(const char *)arg1;
- (const char *)fallbackUri;
- (id)initWithUri:(const char *)arg1 fallbackNamespace:(id)arg2;

@end
