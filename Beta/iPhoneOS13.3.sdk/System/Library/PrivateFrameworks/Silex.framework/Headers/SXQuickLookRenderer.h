/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXQuickLookStyler;

@interface SXQuickLookRenderer : NSObject

{
    id <SXQuickLookStyler> _styler;
}

@property (nonatomic, readonly) id <SXQuickLookStyler> styler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithStyler:(id)arg1;
- (void)render:(id)arg1 attributes:(id)arg2;
- (void)renderThumbnailImage:(id)arg1 view:(id)arg2;
- (void)renderErrorMessage:(id)arg1 view:(id)arg2;

@end
