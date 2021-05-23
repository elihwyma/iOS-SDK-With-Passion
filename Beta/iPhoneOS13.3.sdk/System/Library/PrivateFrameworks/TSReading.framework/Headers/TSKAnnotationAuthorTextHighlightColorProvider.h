/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSKAnnotationAuthor;

@interface TSKAnnotationAuthorTextHighlightColorProvider : NSObject

{
    TSKAnnotationAuthor *mAnnotationAuthor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (struct CGColor *)cgColor;
- (id)initWithAnnotationAuthor:(id)arg1;

@end
