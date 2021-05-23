/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OAVReadState.h>

@class EXReadState;

__attribute__((visibility("hidden")))
@interface EXOAVState : OAVReadState

{
    EXReadState *mEXReadState;
}

@property (weak, readonly) EXReadState *exState;

- (id)initWithEXReadState:(id)arg1 packagePart:(id)arg2;

@end
