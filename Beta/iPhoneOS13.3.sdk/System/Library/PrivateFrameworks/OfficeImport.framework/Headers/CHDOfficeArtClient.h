/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CHDAnchor, NSString;

__attribute__((visibility("hidden")))
@interface CHDOfficeArtClient : NSObject

{
    CHDAnchor *mAnchor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGRect)bounds;
- (id)anchor;
- (void)setAnchor:(id)arg1;
- (_Bool)hasBounds;

@end
