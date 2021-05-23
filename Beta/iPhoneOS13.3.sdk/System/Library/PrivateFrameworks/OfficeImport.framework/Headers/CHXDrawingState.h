/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OAXDrawingState.h>

@class CHXReadState;

__attribute__((visibility("hidden")))
@interface CHXDrawingState : OAXDrawingState

{
    CHXReadState *mCHXState;
}

- (id)initWithCHXState:(id)arg1;
- (id)chxState;

@end
