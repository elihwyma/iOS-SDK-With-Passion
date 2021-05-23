/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TCXmlUtilities : NSObject

+ (void)checkStreamNamespace:(struct _xmlTextReader *)arg1 ns:(id)arg2;
+ (void)checkStreamName:(struct _xmlTextReader *)arg1 name:(const char *)arg2;
+ (id)bundlePathForXmlResource:(id)arg1;
+ (void)checkStreamNamespaceAndName:(struct _xmlTextReader *)arg1 name:(const char *)arg2 ns:(id)arg3;

@end
