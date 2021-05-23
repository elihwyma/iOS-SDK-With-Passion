/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFActivityViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _SFOpenInOtherAppActivityViewController : _SFActivityViewController

{
    NSString *_filePath;
}

@property (retain, nonatomic) NSString *filePath;

+ (_Bool)canOpenWithFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3;
+ (id)_applicationsForDocumentProxy:(id)arg1;
+ (id)_activityItemsForFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3;

- (void)_prepareActivity:(id)arg1;
- (id)initWithFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3;

@end
