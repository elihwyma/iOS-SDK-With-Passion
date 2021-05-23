/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailDaemon/EDSearchableIndexItem.h>

@class NSString;

@interface MFSearchableIndexItem_iOS : EDSearchableIndexItem

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (_Bool)shouldExcludeFromIndex;
- (void)setNeedsAllAttributesIndexingType;
- (_Bool)_shouldAutoDownloadAttachment:(id)arg1;
- (void)addAttachmentAttributesToAttributeSet:(id)arg1;
- (id)fetchIndexableAttachments;

@end
