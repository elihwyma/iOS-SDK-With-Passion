/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class ICDocCamDocumentInfoCollection, NSString;

__attribute__((visibility("hidden")))
@interface DCActivityItemSource : NSObject

{
    ICDocCamDocumentInfoCollection *_docInfoCollection;
}

@property (weak, nonatomic) ICDocCamDocumentInfoCollection *docInfoCollection;
@property (copy, nonatomic, readonly) NSString *attachmentTypeUTI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;
- (id)initWithDocumentInfoCollection:(id)arg1;

@end
