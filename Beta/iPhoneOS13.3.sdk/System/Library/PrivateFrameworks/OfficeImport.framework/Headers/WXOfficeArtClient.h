/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OAXClient.h>

__attribute__((visibility("hidden")))
@interface WXOfficeArtClient : OAXClient

- (void)readClientDataFromNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;
- (struct _xmlNode *)genericNonVisualPropertiesNodeForDrawableNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;
- (id)readClientDrawableFromXmlNode:(struct _xmlNode *)arg1 state:(id)arg2;
- (void)readBlipExtWithURI:(id)arg1 fromNode:(struct _xmlNode *)arg2 toDrawable:(id)arg3 state:(id)arg4;
- (id)readGraphicData:(struct _xmlNode *)arg1 state:(id)arg2;

@end
