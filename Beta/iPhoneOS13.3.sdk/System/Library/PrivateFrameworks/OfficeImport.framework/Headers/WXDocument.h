/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXDocument : NSObject

+ (void)readFontTable:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readStyles:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readLists:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readSources:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readDocumentSettings:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readDocument:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (id)noteRestartEnumMap;
+ (id)notePositionEnumMap;
+ (id)documentFrom:(id)arg1 reader:(id)arg2 cancel:(id)arg3 asThumbnail:(_Bool)arg4;

@end
