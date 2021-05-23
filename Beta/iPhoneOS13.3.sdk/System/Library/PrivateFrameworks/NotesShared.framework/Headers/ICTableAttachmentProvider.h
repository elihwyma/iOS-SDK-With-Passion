/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class CRTTCompatibleDocument, ICAttachment, ICTable;

@protocol ICTableAttachmentProviderDelegate;

@interface ICTableAttachmentProvider : NSObject

{
    _Bool _needsToUpdateTableFromBackgroundAttachment;
    ICAttachment *_attachment;
    ICTable *_table;
    CRTTCompatibleDocument *_tableDoc;
    id <ICTableAttachmentProviderDelegate> _delegate;
    ICAttachment *_backgroundAttachment;
}

@property (retain, nonatomic) ICAttachment *backgroundAttachment;
@property (nonatomic, readonly) CRTTCompatibleDocument *tableDoc;
@property (weak, nonatomic) id <ICTableAttachmentProviderDelegate> delegate;
@property (weak, nonatomic) ICAttachment *attachment;
@property (nonatomic, readonly) ICTable *table;
@property (nonatomic) _Bool isBeingEditedLocallyOnDevice;
@property (nonatomic) _Bool needsToUpdateTableFromBackgroundAttachment;

+ (id)providerMapping;
+ (id)mergeNotificationRegister;
+ (id)sharedProviderForAttachment:(id)arg1;
+ (id)backgroundManagedObjectContext;
+ (void)notifyProviderForRefreshToAttachment:(id)arg1;
+ (void)saveAttachmentOnMainThread:(id)arg1;

- (void)didRefreshBackgroundTableAttachment:(id)arg1;
- (void)updateTableFromMOC;
- (void)notifyDelegateTableAttachmentWillMerge;
- (void)notifyDelegateTableAttachmentDidMerge;
- (void)setTableFromDocument:(id)arg1;

@end
