/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PXPresentation : NSObject

+ (struct CGSize)readSizeFromChildOfElement:(struct _xmlNode *)arg1 childName:(const char *)arg2 state:(id)arg3;
+ (void)readPresentationProperties:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readSlideIndicesWithPresentationPart:(id)arg1 presentationState:(id)arg2;
+ (id)readFromPackage:(id)arg1 fileName:(id)arg2 reader:(id)arg3 cancel:(id)arg4 isThumbnail:(_Bool)arg5 delegate:(id)arg6;

@end
