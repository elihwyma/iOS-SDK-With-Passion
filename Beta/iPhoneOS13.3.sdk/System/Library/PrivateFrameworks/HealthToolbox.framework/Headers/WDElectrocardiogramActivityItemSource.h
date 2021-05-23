/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramActivityItemSource : NSObject

{
    NSURL *_pdfTemporaryFileURL;
}

@property (nonatomic, readonly) NSURL *pdfTemporaryFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)initWithPDFData:(id)arg1 sampleDate:(id)arg2;

@end
