/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ECXmlDump : NSObject

+ (struct _xmlNode *)xmlNodeWithName:(id)arg1 forObject:(id)arg2;
+ (struct _xmlNode *)xmlNodeForObject:(id)arg1;

- (_Bool)isXmlNodeNeeded;
- (void)addXmlProperties:(struct _xmlNode *)arg1;

@end
