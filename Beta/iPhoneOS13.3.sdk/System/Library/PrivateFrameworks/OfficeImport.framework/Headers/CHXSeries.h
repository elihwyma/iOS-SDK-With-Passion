/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXSeries : NSObject

+ (id)readFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)resolveSeriesStyle:(id)arg1 state:(id)arg2;
+ (id)chdSeriesFromXmlSeriesElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (Class)chxSeriesClassWithState:(id)arg1;

@end
