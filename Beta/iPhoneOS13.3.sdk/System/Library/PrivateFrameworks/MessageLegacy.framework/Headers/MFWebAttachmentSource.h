/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject

{
    MFLock *_attachmentsLock;
    NSMutableDictionary *_attachmentsByURL;
}

+ (id)_setOfAllSources;
+ (id)allSources;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)removeAttachmentForURL:(id)arg1;
- (id)attachmentForURL:(id)arg1;
- (_Bool)setAttachment:(id)arg1 forURL:(id)arg2;

@end
