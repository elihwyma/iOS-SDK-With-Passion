/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, _SFQuickLookDocument;

@protocol OS_dispatch_queue;

@interface _SFQuickLookDocumentWriter : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_filePathAccessedOnDispatchQueue;
    _Bool _hasFinishedWriting;
    _SFQuickLookDocument *_quickLookDocument;
}

@property (copy, nonatomic) NSString *filePathAccessedOnDispatchQueue;
@property (nonatomic, readonly) _SFQuickLookDocument *quickLookDocument;
@property (nonatomic, readonly) _Bool hasFinishedWriting;

- (id)initWithFileName:(id)arg1 uti:(id)arg2;
- (void)writeDataAndClose:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
