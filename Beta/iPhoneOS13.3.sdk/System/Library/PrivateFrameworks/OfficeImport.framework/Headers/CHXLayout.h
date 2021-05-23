/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXLayout : NSObject

+ (void)readFrom:(struct _xmlNode *)arg1 graphicProperties:(id)arg2 state:(id)arg3;
+ (struct CGRect)boundsRectFromXmlManualLayoutElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)orientedBoundsFromLayoutElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)stringFromLayoutMode:(int)arg1;

@end
