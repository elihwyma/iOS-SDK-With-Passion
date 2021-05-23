/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@interface WKQuadObject : NSObject

{
    struct _WKQuad _quad;
}

- (struct CGRect)boundingBox;
- (struct _WKQuad)quad;
- (id)initWithQuad:(struct _WKQuad)arg1;

@end
