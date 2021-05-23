/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXMarker : NSObject

+ (int)chdMarkerStyleFromXmlMarkerStyleElement:(struct _xmlNode *)arg1;
+ (id)chdMarkerFromXmlMarkerElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)stringFromMarkerStyle:(int)arg1;

@end
