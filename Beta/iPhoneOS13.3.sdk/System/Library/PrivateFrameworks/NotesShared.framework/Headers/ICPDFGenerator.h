/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSString, NSURL;

@interface ICPDFGenerator : NSObject

{
    struct CGContext *_pdfContext;
    NSURL *_fileURL;
    NSString *_title;
    NSMutableData *_data;
    struct CGRect _pageRect;
}

@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) struct CGRect pageRect;
@property (retain, nonatomic) NSMutableData *data;
@property (nonatomic, readonly) NSURL *url;

- (id)init;
- (void)dealloc;
- (void)finishGenerating;
- (void)addPageWithPageRect:(struct CGRect)arg1 renderBlock:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1 pageRect:(struct CGRect)arg2 title:(id)arg3;
- (id)initWithMutableData:(id)arg1 pageRect:(struct CGRect)arg2 title:(id)arg3;
- (_Bool)startGenerating;
- (void)addPageWithRenderBlock:(CDUnknownBlockType)arg1;

@end
