/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface XMLWrapperElementFactory : NSObject

+ (void)initialize;
+ (id)sharedInstance;
+ (Class)elementClassByTagName:(id)arg1;
+ (unsigned long long)elementTypeByTagName:(id)arg1;
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2;

- (Class)classForXMLNode:(struct _xmlNode *)arg1 error:(id *)arg2;

@end
