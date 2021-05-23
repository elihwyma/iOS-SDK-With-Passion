/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKSearchFoundationRichText.h>

__attribute__((visibility("hidden")))
@interface MKSearchFoundationBusinessReviewRichText : MKSearchFoundationRichText

{
    _Bool _reviewResolved;
}

@property (getter=isReviewResolved) _Bool reviewResolved;

- (_Bool)isRichTextResolved;
- (void)resolveReviewStringWithProviderNameByMapItem:(id)arg1 lines:(id)arg2 temporaryReviewString:(id)arg3;
- (void)resolveReviewStringWithProviderNameNotFoundByMapItem:(id)arg1 lines:(id)arg2 temporaryReviewString:(id)arg3;

@end
