/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@interface LPMIMETypeRegistry : NSObject

+ (_Bool)isHLSType:(id)arg1;
+ (_Bool)isMediaType:(id)arg1;
+ (id)UTIForMIMEType:(id)arg1;
+ (_Bool)isNonAnimatedMultiframeImageType:(id)arg1;
+ (_Bool)isImageType:(id)arg1;
+ (_Bool)isJSONType:(id)arg1;
+ (id)MIMETypeForUTI:(id)arg1;
+ (id)fileExtensionForUTI:(id)arg1;
+ (_Bool)isWebPageType:(id)arg1;
+ (_Bool)isVideoType:(id)arg1;
+ (_Bool)isARAssetType:(id)arg1;
+ (id)UTIForFileExtension:(id)arg1;
+ (id)fileExtensionForMIMEType:(id)arg1;

@end
