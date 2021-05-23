/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBDocument : NSObject

+ (id)readFrom:(id)arg1;
+ (void)setTimeStamp:(struct WrdDocumentProperties *)arg1;
+ (void)readProperties:(id)arg1 document:(id)arg2;
+ (void)setupZIndices:(id)arg1 document:(id)arg2 escherType:(int)arg3;
+ (void)readSectionsFrom:(id)arg1 document:(id)arg2;
+ (void)readTextBoxesFrom:(id)arg1;
+ (void)readNoteSeparatorFrom:(id)arg1 type:(int)arg2 separator:(id)arg3;

- (id)init;
- (id)applicationName;

@end
