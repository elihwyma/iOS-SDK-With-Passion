/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class ESDContainer, ESDObject;

__attribute__((visibility("hidden")))
@interface PptHyperlinkBlock : NSObject

{
    ESDContainer *mInteractiveInfoContainerHolder;
    ESDObject *mTxInteractiveInfoAtomHolder;
}

- (id)interactiveInfoContainerHolder;
- (void)setInteractiveInfoContainerHolder:(id)arg1;
- (struct PptTxInteracInfoAtom *)txtInteractiveInfoAtom;
- (void)setTxInteractiveInfoAtomHolder:(id)arg1;

@end
