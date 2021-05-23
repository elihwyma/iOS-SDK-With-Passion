/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class EBReaderSheetState, NSString;

__attribute__((visibility("hidden")))
@interface EBSheetContext : NSObject <Swift>

{
    EBReaderSheetState *mSheetState;
    unsigned int mSheetIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)loadDelayedNode:(id)arg1;
- (id)initWithSheetIndex:(unsigned int)arg1 state:(id)arg2;

@end
