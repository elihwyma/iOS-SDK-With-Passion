/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OAXClient.h>

@class PXPresentationState;

__attribute__((visibility("hidden")))
@interface PXOfficeArtClient : OAXClient

{
    PXPresentationState *mPresentationState;
}

@property (weak, readonly) PXPresentationState *presentationState;

+ (int)readPlaceholderTypeFromNode:(struct _xmlNode *)arg1;
+ (int)readPlaceholderBoundsTrackFromNode:(struct _xmlNode *)arg1;

- (id)initWithState:(id)arg1;
- (void)readClientDataFromShapeNode:(struct _xmlNode *)arg1 toShape:(id)arg2 state:(id)arg3;
- (void)readClientDataFromPictureNode:(struct _xmlNode *)arg1 toImage:(id)arg2 state:(id)arg3;
- (void)postprocessHyperlink:(id)arg1 relationship:(id)arg2 state:(id)arg3;
- (_Bool)chartAutoFillIsHollow;
- (_Bool)chartAutoStrokeIsHollow;
- (void)readBlipExtWithURI:(id)arg1 fromNode:(struct _xmlNode *)arg2 toDrawable:(id)arg3 state:(id)arg4;
- (id)readOle:(struct _xmlNode *)arg1 state:(id)arg2;
- (void)readClientDataFromGraphicalFramePropertiesNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;
- (id)readClientTextField:(struct _xmlNode *)arg1 identity:(id)arg2 paragraph:(id)arg3 state:(id)arg4;

@end
