/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OAVReadState.h>

@class ESDObject, PBPresentationReaderState;

__attribute__((visibility("hidden")))
@interface PXVmlState : OAVReadState

{
    ESDObject *mLegacyTextGlobals;
    PBPresentationReaderState *mLegacyPresentationState;
}

- (id)legacyTextGlobals;
- (void)setLegacyTextGlobals:(id)arg1;
- (id)legacyPresentationState;
- (void)setLegacyPresentationState:(id)arg1;

@end
