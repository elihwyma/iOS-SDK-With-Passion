/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MFPhotoPickerProgressManager : NSObject

{
    NSMutableDictionary *_progressItems;
}

@property (nonatomic, readonly) NSMutableDictionary *progressItems;

- (id)init;
- (_Bool)anyRequestExists;
- (void)cancelEverything;
- (double)progressForIndexPath:(id)arg1;
- (_Bool)requestExistsForIndexPath:(id)arg1;
- (void)setProgress:(double)arg1 forIndexPath:(id)arg2;
- (void)setExportSession:(id)arg1 forIndexPath:(id)arg2;
- (void)cancelEverythingAtIndexPath:(id)arg1;
- (void)setImageRequestID:(int)arg1 forIndexPath:(id)arg2;
- (void)_cancelProgressItem:(id)arg1;

@end
