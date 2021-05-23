/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <SearchFoundation/SFRichText.h>

__attribute__((visibility("hidden")))
@interface MKSearchFoundationRichText : SFRichText

{
    CDUnknownBlockType _completionHandlers;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandlers;

- (id)initWithString:(id)arg1;
- (void)setText:(id)arg1;
- (void)loadRichTextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isRichTextResolved;
- (void)_invokeCompletionHandlers;
- (id)initRichTextTitleWithMapItem:(id)arg1 resultsType:(unsigned long long)arg2;

@end
