/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBProgTag : NSObject

+ (id)binaryTagDataWithName:(const unsigned short *)arg1 inProgTagsParent:(id)arg2;
+ (void)readClientData:(id)arg1 state:(id)arg2;
+ (void)readDocumentList:(id)arg1 state:(id)arg2;
+ (void)readBulletStylesFromDocumentList:(id)arg1 state:(id)arg2;
+ (void)readBulletImagesFromDocumentList:(id)arg1 state:(id)arg2;
+ (void)readMacCharStylesFromDocumentList:(id)arg1 state:(id)arg2;
+ (void)readHyperlinkScreenTipsFromDocumentList:(id)arg1 state:(id)arg2;
+ (id)readBulletStyleFromClientData:(id)arg1;
+ (id)readMacCharStyleFromClientData:(id)arg1;
+ (id)binaryTagDataWithName:(const unsigned short *)arg1 inProgTags:(id)arg2;
+ (id)ensureBinaryTagDataWithName:(const unsigned short *)arg1 inProgTags:(id)arg2;
+ (const struct PBTextFormatProgTagInfo *)textFormatInfoForProgTagName:(const unsigned short *)arg1;
+ (id)ensureBinaryTagDataWithName:(const unsigned short *)arg1 inProgTagsParent:(id)arg2;
+ (void)readBulletStylesFromMainMaster:(id)arg1 state:(id)arg2;
+ (void)readBulletImagesFromContainerParent:(id)arg1 state:(id)arg2;

@end
