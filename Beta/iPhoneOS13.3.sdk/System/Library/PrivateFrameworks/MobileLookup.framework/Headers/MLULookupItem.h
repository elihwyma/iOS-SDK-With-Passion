/*
 Image: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
 */

#import <Foundation/NSObject.h>

@class MLULookupItemContent, NSArray, NSDictionary, NSString, NSURL;

@interface MLULookupItem : NSObject

{
    NSURL *_url;
    struct __DDResult *_ddResult;
    NSString *_text;
    struct _NSRange _focusRange;
    NSArray *_attachments;
    unsigned long long _currentAttachmentIndex;
    struct _NSRange _proposedRange;
    _Bool _resolved;
    NSDictionary *_documentProperties;
    MLULookupItemContent *_previewContent;
}

@property (retain, nonatomic) MLULookupItemContent *previewContent;
@property (retain) NSDictionary *documentProperties;

- (void)dealloc;
- (_Bool)resolve;
- (void)commit;
- (id)initWithURL:(id)arg1 dataDetectorsResult:(struct __DDResult *)arg2 text:(id)arg3 range:(struct _NSRange)arg4;
- (id)initWithAttachments:(id)arg1 currentAttachment:(unsigned long long)arg2;
- (id)viewControllerToPresent;
- (unsigned long long)commitType;
- (void)commitWithTransitionForPreviewViewController:(id)arg1 inViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_resolveURL:(id)arg1 DDResult:(struct __DDResult *)arg2 focusRange:(struct _NSRange)arg3;
- (_Bool)_resolveAttachments:(id)arg1 currentAttachmentIndex:(unsigned long long)arg2;
- (_Bool)_resolveText:(id)arg1 focusRange:(struct _NSRange)arg2;
- (id)webUrlToPresent;
- (struct _NSRange)proposedRange;

@end
