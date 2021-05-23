/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface XMLWrapperNamespace : NSObject

{
    struct _xmlNs *_xmlNs;
    NSString *_href;
    NSString *_prefix;
}

@property (retain, nonatomic) NSString *href;
@property (retain, nonatomic) NSString *prefix;

- (id)initWithNsNode:(struct _xmlNs *)arg1 error:(id *)arg2;
- (struct _xmlNs *)xmlNsForNode:(struct _xmlNode *)arg1 error:(id *)arg2;

@end
